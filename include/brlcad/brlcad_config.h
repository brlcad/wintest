/**** Define statements for CMake ****/
#if !defined(BRLCADBUILD)
  #  pragma message "Warning: included brlcad_config.h (compile-time API) without BRLCADBUILD defined"
#endif
#if !defined(HAVE_CONFIG_H)
  #  pragma message "Warning: included brlcad_config.h (compile-time API) without HAVE_CONFIG_H defined"
#endif
#ifndef __CONFIG_H__
#define __CONFIG_H__
#define PACKAGE "brlcad"
#define PACKAGE_BUGREPORT "https://brlcad.org"
#define PACKAGE_NAME "BRL-CAD"
#define PACKAGE_STRING "BRL-CAD 7.32.0"
#define PACKAGE_TARNAME "brlcad"
#define EXECUTABLE_SUFFIX ".exe"
#define SHARED_LIBRARY_SUFFIX ".dll"
#define BRLCAD_ROOT "C:/Program Files/BRL-CAD 7.32.0"
#define BRLCAD_BIN_DIR "bin"
#define BRLCAD_LIB_DIR "lib"
#define BRLCAD_LIBEXEC_DIR "libexec"
#define BRLCAD_INCLUDE_DIR "include"
#define BRLCAD_DATA_DIR "share"
#define BRLCAD_DOC_DIR "share/doc"
#define BRLCAD_MAN_DIR "share/man"
#define SIZEOF_VOID_P 8
#ifndef __WORDSIZE
#  define __WORDSIZE 64
#endif
#define DEBUG 1
#define PARALLEL 1
#if !defined(inline) && !defined(__cplusplus)
#  define inline inline
#endif /* !inline && !__cplusplus */
#define HAVE_TIMESETEVENT 1
#define STDC_HEADERS 1
#define HAVE_DIRECT_H 1
#define HAVE_EMMINTRIN_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_IO_H 1
#define HAVE_MEMORY_H 1
#define HAVE_PROCESS_H 1
#define HAVE_SIGNAL_H 1
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_STRSAFE_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_WINDOWS_H 1
#define HAVE_ISTREAM 1
#define HAVE_LIMITS 1
#define HAVE_EMMINTRIN 1
#define HAVE_STRUCT_STAT_ST_RDEV 1
#define HAVE_INT 1
#define SIZEOF_INT 4
#define HAVE_LONG 1
#define SIZEOF_LONG 4
#define HAVE_LONG_LONG 1
#define SIZEOF_LONG_LONG 8
#define HAVE_OFF_T 1
#define SIZEOF_OFF_T 4
#define HAVE_PTRDIFF_T 1
#define SIZEOF_PTRDIFF_T 8
#define HAVE_SIZE_T 1
#define SIZEOF_SIZE_T 8
#define HAVE_UINT64_T 1
#define SIZEOF_UINT64_T 8
#define HAVE_UINTPTR_T 1
#define SIZEOF_UINTPTR_T 8
#define OFF_T_SIZE_MISMATCH 1
#define HAVE_OFF_T_64BIT 1
#define HAVE_THREAD_LOCAL 1
#define HAVE_PERCENT_Z 1
#define HAVE__PUTENV_S 1
#define HAVE_DECL__PUTENV_S 1
#define HAVE__SPLITPATH 1
#define HAVE_DECL__SPLITPATH 1
#define HAVE__STRTOI64 1
#define HAVE_DECL__STRTOI64 1
#define HAVE_ASINH 1
#define HAVE_DECL_ASINH 1
#define HAVE_FDOPEN 1
#define HAVE_DECL_FDOPEN 1
#define HAVE_GETCWD 1
#define HAVE_DECL_GETCWD 1
#define HAVE_GETENV_S 1
#define HAVE_DECL_GETENV_S 1
#define HAVE_GETPID 1
#define HAVE_DECL_GETPID 1
#define HAVE_HYPOT 1
#define HAVE_DECL_HYPOT 1
#define HAVE_LOGB 1
#define HAVE_DECL_LOGB 1
#define HAVE_LSEEK 1
#define HAVE_DECL_LSEEK 1
#define HAVE_MODFF 1
#define HAVE_DECL_MODFF 1
#define HAVE_NEXTAFTER 1
#define HAVE_DECL_NEXTAFTER 1
#define HAVE_NEXTAFTERF 1
#define HAVE_DECL_NEXTAFTERF 1
#define HAVE_RINT 1
#define HAVE_DECL_RINT 1
#define HAVE_STRDUP 1
#define HAVE_DECL_STRDUP 1
#define HAVE_STRTOLL 1
#define HAVE_DECL_STRTOLL 1
#define HAVE_TIME 1
#define HAVE_DECL_TIME 1
#define HAVE_TZSET 1
#define HAVE_DECL_TZSET 1
#define HAVE_ALLOCA 1
#define HAVE_FILENO 1
#define HAVE_DECL_FILENO 1
#define HAVE_GETFULLPATHNAME 1
#define HAVE_GETCURRENTPROCESSID 1
#define HAVE_LRINT 1
#define HAVE_DECL_LRINT 1
#define HAVE_DECL_LRINT 1
#define HAVE_TGAMMA 1
#define HAVE_DECL_TGAMMA 1
#define HAVE_CXX_LOGB 1
#define HAVE__ISNAN 1
#define HAVE__FSEEKI64 1
#define HAVE_DECL__FSEEKI64 1
#define HAVE__LSEEKI64 1
#define HAVE_DECL__LSEEKI64 1
#define HAVE__FTELLI64 1
#define HAVE_DECL__FTELLI64 1
#define HAVE_TCL_H 1
#define TCL_SYSTEM_INITTCL_PATH ""
#define HAVE_TK_H 1
#define HAVE_TK
#define ITCL_VERSION	"3.4"
#define IWIDGETS_VERSION "4.1.1"
#include "brlcad/config_win.h"
#endif /* __CONFIG_H__ */
