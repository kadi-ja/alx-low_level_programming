
#include <stdio.h>
#ifndef _3_FUNCTION_LIKE_MACRO_H_
#define _3_FUNCTION_LIKE_MACRO_H_

#define ABS(x) if(x >= 0) \
return(x); \
else \
return(x*(-1));

#endif
