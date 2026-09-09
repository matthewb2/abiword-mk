# Build
./configure --enable-plugins --enable-builtin-plugins=no

make CPPFLAGS="-DTOOLKIT_WIN" CXXFLAGS="-DTOOLKIT_WIN"

## BuildInfo.o 생성
g++ -std=c++11 -g -O2 -DHAVE_CONFIG_H -I. -I.. -I./af/xap/xp -I./af/util/xp $(pkg-config --cflags glib-2.0 fribidi libgsf-1) -c wp/main/win/BuildInfo.cpp -o wp/main/win/BuildInfo.o

## create dll
g++ -shared -o libabiword-3.0.dll  .libs/Win32Resources.o ./wp/main/win/Win32Main.o ./wp/main/win/BuildInfo.o -Wl,--out-implib,libabiword-3.0.dll.a -Wl,--whole-archive ./af/ev/win/.libs/libwin.a ./af/ev/xp/.libs/libxp.a ./af/gr/win/.libs/libwin.a ./af/gr/xp/.libs/libxp.a ./af/util/win/.libs/libwin.a ./af/util/xp/.libs/libxp.a ./af/xap/win/.libs/libwin.a ./af/xap/xp/.libs/libxp.a ./plugins/.libs/libplugins.a ./text/fmt/xp/.libs/libxp.a ./text/ptbl/xp/.libs/libxp.a ./wp/ap/win/.libs/libwin.a ./wp/ap/xp/.libs/libxp.a ./wp/impexp/.libs/libimpexp.a -Wl,--no-whole-archive ./wp/impexp/win/.libs/libwin.a ./wp/impexp/xp/.libs/libxp.a -lenchant-2 -lfribidi -lxslt -lxml2 -lwv -lgsf-1 -lgio-2.0 -lgobject-2.0 -lglib-2.0 -lz -ljpeg -lpng -luuid -lversion -lwinspool -lmsvcrt -loleaut32 -lole32 -lcomdlg32 -lcomctl32 -lgdi32
