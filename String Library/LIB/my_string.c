#include "my_string.h"

uint_32 mystring_memchr(const uint_8 *str,const uint_8 ch)
{
    uint_32 flag = 0 ;
    while(*str != '/0')
    {
        if (*str == ch)
        {
            break;
        }
        else
        {
            str++;
            flag++;
        }
    }
    return flag ;
}
void mystring_memcmp(const uint_8 *str1,const uint_8 *str2,uint_32 pos)
{
    uint_8  flag = 0;
    uint_32 index = 0;
    for(index = 0 ; index < pos ; index++)
    {
        if(*str1 == *str2)
        {
            flag = 1 ;
        }
        else
        {
            flag = 0;
            break;
        }
        str1++;
        str2++;
    }
    if(1 == flag)
    {
        printf("they are the same\n");
    }
    else
    {
        printf("they are not the same\n");
    }
}
void    mystring_memcpy(const uint_8 *str1, uint_8 *str2,uint_32 pos)
{
    uint_32 index = 0 ;
    for(index = 0 ; index < pos ; index++)
    {
        *str2 = *str1;
        str2++;
        str1++;
    }
}
