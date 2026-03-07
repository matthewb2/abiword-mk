#!/usr/bin/env python3
# generate_plugin_cmake.py

import os
import re

# 플러그인 폴더 경로
PLUGINS_DIR = "plugins"

# Makefile.am에서 *_SOURCES 추출
source_pattern = re.compile(r'(\w+)_SOURCES\s*=\s*(.*)')

def parse_makefile_am(makefile_path):
    sources = []
    with open(makefile_path, 'r', encoding='utf-8') as f:
        content = f.read()

    for match in source_pattern.finditer(content):
        src_list = match.group(2).split()
        # 소스 파일만 필터
        src_files = [s for s in src_list if s.endswith(('.c', '.cpp', '.cc', '.cxx'))]
        sources.extend(src_files)
    return sources

def generate_cmakelists(plugin_path, sources):
    cmake_path = os.path.join(plugin_path, "CMakeLists.txt")
    plugin_name = os.path.basename(plugin_path)

    if not sources:
        print(f"Skipping {plugin_name}: no sources found")
        return

    content = f"""# Auto-generated CMakeLists.txt for {plugin_name}
file(GLOB PLUGIN_SRC
    {" ".join(sources)}
)

add_library({plugin_name} SHARED ${{PLUGIN_SRC}})
target_link_libraries({plugin_name} PRIVATE abiword_core ${{GTK3_LIBRARIES}} ${{HUNSPELL_LIBRARIES}} ${{LIBWPW_LIBRARIES}})
set_target_properties({plugin_name} PROPERTIES PREFIX "")
"""

    with open(cmake_path, 'w', encoding='utf-8') as f:
        f.write(content)
    print(f"Generated {cmake_path}")
    
def process_plugins_dir(directory):
    for root, dirs, files in os.walk(directory):
        if "Makefile.am" in files:
            makefile_path = os.path.join(root, "Makefile.am")
            sources = parse_makefile_am(makefile_path)
            if sources:
                generate_cmakelists(root, sources)

if __name__ == "__main__":
    if not os.path.isdir(PLUGINS_DIR):
        print(f"Error: '{PLUGINS_DIR}' folder not found")
        exit(1)
    process_plugins_dir(PLUGINS_DIR)