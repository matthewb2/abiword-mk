# abiword-mk
abiword mk edition

# following libraries required

# compile
cmake -B build -G "MinGW Makefiles" -DPKG_CONFIG_EXECUTABLE=/mingw32/bin/pkg-config -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS="-DNDEBUG"