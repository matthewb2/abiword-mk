# Abiword-MK
abiword mk edition
MSYS2 MINGW32/64
windows platform only

# Following libraries required

# Compile
cmake -B build -G "MinGW Makefiles" -DPKG_CONFIG_EXECUTABLE=/mingw32/bin/pkg-config -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS="-DNDEBUG" -DCMAKE_C_COMPILER_LAUNCHER=ccache -DCMAKE_CXX_COMPILER_LAUNCHER=ccache