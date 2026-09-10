# Build
./configure --enable-plugins --enable-builtin-plugins=no

make CPPFLAGS="-DTOOLKIT_WIN" CXXFLAGS="-DTOOLKIT_WIN"

./make_dist
