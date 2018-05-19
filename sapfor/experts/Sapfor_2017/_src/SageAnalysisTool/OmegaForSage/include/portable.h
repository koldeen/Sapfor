/* portable.h,v 1.1 1993/09/17 22:14:20 fbodin Exp */

#ifndef Already_Included_Portable
#define Already_Included_Portable

/* define integer type names for portability */
/* use 'sint' and 'uint' unless space is at a premium */

typedef long int		sint;
typedef char			sint8;
typedef short int		sint16;
typedef long int		sint32;
typedef unsigned char		uint8;
typedef unsigned short int	uint16;
typedef unsigned long int	uint32;
#ifndef __cplusplus 
typedef unsigned char		bool;
#endif

/* tiny uses arrays of characters to buffer I/O at various points.
   These really should be dynamically sized strings, but since that
   is a pain in C, we just make arrays of the following size.
   In many cases, the size is not tested, so, for example, running
   tiny on a file with a really long name can cause a core dump.
   This ought to be at least 256, as thats the largest constant that
   we replaced with TINYBUFSIZ.  This is in portable.h for irony */
#define TINYBUFSIZ    256

#ifndef __TURBOC__
#include <sys/types.h>
#endif

#define uint unsigned int

#ifndef NIL
#define NIL 0L
#endif

#define ANSI_libraries

#define TYPEPROCPTR typedef
#define EXPROC extern
#define PROC

#define SWAP(TYPE, V1, V2)  \
{ TYPE TMP;   \
  TMP = V1;   \
  V1 = V2;    \
  V2 = TMP;   \
}

/*
#define MIN(X,Y) ((X)<(Y)?(X):(Y))
#define MAX(X,Y) ((X)>(Y)?(X):(Y))
*/

#endif
