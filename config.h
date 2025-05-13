/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* major.minor */
#define ABIWORD_SERIES "3.0" 

/* Define to enable debugging functionality */
/* #undef DEBUG */

/* Define to prevent symbols from being exported dynamically */
/* #undef DISABLE_EXPORTS */

/* Whether we are building for embedded device */
/* #undef EMBEDDED_TARGET */

/* Generic embedded platform */
#define EMBEDDED_TARGET_GENERIC 1

/* Hildon embedded platform */
#define EMBEDDED_TARGET_HILDON 2

/* Poky embedded platform */
#define EMBEDDED_TARGET_POKY 3

/* Define to enable include emacs-compatible keyboard commands */
#define ENABLE_EMACS_KEYBINDING 1

/* Define if building menu button support */
/* #undef ENABLE_MENUBUTTON */

/* Define if building printing support */
#define ENABLE_PRINT 1

/* Define if building spell checking support */
#define ENABLE_SPELL 1

/* Define if building status bar */
#define ENABLE_STATUSBAR 1

/* Define to enable include vi-compatible keyboard commands */
#define ENABLE_VI_KEYBINDING 1

/* Define to 1 if you have the <asio.hpp> header file. */
/* #undef HAVE_ASIO_HPP */

/* define if the Boost library is available */
#define HAVE_BOOST /**/

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the <eps/eps.h> header file. */
/* #undef HAVE_EPS_EPS_H */

/* Use gcrypt for the cryptos */
#define HAVE_GCRYPT 1

/* GSF has GIO support */
/* #undef HAVE_GSF_GIO */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `jpeg' library (-ljpeg). */
#define HAVE_LIBJPEG 1

/* "have link-grammar 5.1.0 or later" */
/* #undef HAVE_LINK_GRAMMAR_51 */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <tidy/tidy.h> header file. */
/* #undef HAVE_TIDY_TIDY_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <valgrind/memcheck.h> header file. */
/* #undef HAVE_VALGRIND_MEMCHECK_H */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to disable debugging functionality */
#define NDEBUG 1

/* Name of package */
#define PACKAGE "abiword"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://www.abisource.com/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "abiword"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "abiword 3.0.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "abiword"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.0.5"

/* The platform that is compiled for */
#define PLATFORM "win"

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. This
   macro is obsolete. */
/* #undef TIME_WITH_SYS_TIME */

/* The toolkit that is used */
#define TOOLKIT "win"

/* Build cocoa user interface */
/* #undef TOOLKIT_COCOA */

/* Build gtk+ user interface */
/* #undef TOOLKIT_GTK */

/* Build gtk+ user interface */
/* #undef TOOLKIT_GTK2 */

/* Build gtk+ user interface */
/* #undef TOOLKIT_GTK_ALL */

/* Build win32 user interface */
#define TOOLKIT_WIN 1

/* Build a full unicode AbiWord */
#define UNICODE 1

/* Version number of package */
#define VERSION "3.0.5"

/* Using Cairo */
/* #undef WITH_CAIRO */

/* Using champlain */
/* #undef WITH_CHAMPLAIN */

/* use Dom's enchanting spell checker abstraction library */
#define WITH_ENCHANT 1

/* Using evolution_data_server */
/* #undef WITH_EVOLUTION_DATA_SERVER */

/* Define if using GIO */
/* #undef WITH_GIO */

/* Define if using gnome-vfs */
/* #undef WITH_GNOMEVFS */

/* Define if using goffice */
/* #undef WITH_GOFFICE */

/* Using libical */
/* #undef WITH_LIBICAL */

/* Using redland */
/* #undef WITH_REDLAND */

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* minimal comctl.dll v4.70 for toolbars */
#define _WIN32_IE 0x0501

/* support collaboration plugin in Windows 2000 or higher */
#define _WIN32_WINNT 0x0500

/* Define as a signed integer type capable of holding a process identifier. */
/* #undef pid_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */
