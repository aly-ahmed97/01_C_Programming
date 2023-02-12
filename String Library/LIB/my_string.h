#ifndef _MY_STRING_H_
#define _MY_STRING_H_
#include "types.h"

uint_32 mystring_memchr(const uint_8 *str,const uint_8 ch);
void    mystring_memcmp(const uint_8 *str1,const uint_8 *str2,uint_32 pos);
void    mystring_memcpy(const uint_8 *str1, uint_8 *str2,uint_32 pos);
#endif // _MY_STRING_H_
