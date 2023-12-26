/******************************************************************************
 * Select what I want from C99, for Personize & Customize, for easy to use
 * 
 *****************************************************************************/

#ifndef DATA_TYPES_H
#define DATA_TYPES_H

#ifndef U8
typedef unsigned char U8;
#endif

#ifndef S8
typedef signed char S8;
#endif

#ifndef U32
typedef unsigned int U32;
#endif

#ifndef S32
typedef signed int S32;
#endif

#ifndef U64
typedef unsigned long long U64;
#endif

enum RETURN_TYPES
{
	RET_OK = 0,
	RET_FAIL,
	RET_PARAM,
	RET_MEM,
	RET_IO,
};

#endif