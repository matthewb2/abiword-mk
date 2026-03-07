#!/usr/bin/env python3
# gen_cc_recursive_fixed.py

import os
import re

PLUGINS_DIR = "src"
TARGET_PLUGINS = ["af",  "gi-overrides",  "plugins",  "text",  "wp"]

source_pattern = re.compile(r'(\w+)_SOURCES\s*=\s*(.*)')

def parse_makefile_am(makefile_path):
    sources = []
    with open(makefile_path, 'r', encoding='utf-8') as f:
        content = f.read()
    for match in source_pattern.finditer(content):
        src_list = match.group(2).split()
        src_files = [s for s in src_list if s.endswith(('.c', '.cpp', '.cc', '.cxx'))]
        sources.extend(src_files)
    return sources

def generate_cmakelists(folder_path, sources):
    """소스가 없어도 하위 폴더용 CMakeLists.txt 생성 가능"""
    folder_name = os.path.basename(folder_path)
    cmake_file = os.path.join(folder_path, "CMakeLists.txt")

    content_lines = [f"# Auto-generated CMakeLists.txt for {folder_name}\n"]

    if sources:
        content_lines.append("file(GLOB PLUGIN_SRC\n    " + " ".join(sources) + "\n)\n")
        content_lines.append(f"add_library({folder_name} SHARED ${{PLUGIN_SRC}})\n")
        content_lines.append(f"target_link_libraries({folder_name} PRIVATE abiword_core ${{GTK3_LIBRARIES}} ${{HUNSPELL_LIBRARIES}} ${{LIBWPW_LIBRARIES}})\n")
        content_lines.append(f"set_target_properties({folder_name} PROPERTIES PREFIX \"\")\n")

    # 하위 폴더 자동 add_subdirectory
    for entry in os.listdir(folder_path):
        subdir = os.path.join(folder_path, entry)
        if os.path.isdir(subdir):
            content_lines.append(f"add_subdirectory({entry})\n")

    with open(cmake_file, 'w', encoding='utf-8') as f:
        f.writelines(content_lines)
    print(f"Generated {cmake_file}")

def process_folder(folder_path):
    makefile_path = os.path.join(folder_path, "Makefile.am")
    sources = []
    if os.path.exists(makefile_path):
        sources = parse_makefile_am(makefile_path)

    # CMakeLists.txt 생성
    generate_cmakelists(folder_path, sources)

    # 하위 폴더 재귀 처리
    for entry in os.listdir(folder_path):
        subdir = os.path.join(folder_path, entry)
        if os.path.isdir(subdir):
            process_folder(subdir)

def main():
    if not os.path.isdir(PLUGINS_DIR):
        print(f"Error: '{PLUGINS_DIR}' folder not found")
        return

    for plugin in TARGET_PLUGINS:
        plugin_path = os.path.join(PLUGINS_DIR, plugin)
        if os.path.isdir(plugin_path):
            process_folder(plugin_path)
        else:
            print(f"Warning: plugin '{plugin}' folder not found")

if __name__ == "__main__":
    main()