#include "Searching.h"
#include <stdlib.h>
signed int Linear_Search(unsigned int *data , unsigned int length , unsigned int goal)
{
    unsigned int index = 0 ;
    for(index = 0 ; index < length ; index++)
    {
        if(*data == goal)
        {
            return index ;
        }
        else
        {
            data++ ;
        }
    }
    return -1 ;
}
signed int Binary_Search(unsigned int *data , unsigned int length , unsigned int goal)
{
    unsigned int *First_Index = data ;
    unsigned int *Last_Index = data + length ;
    unsigned int *M_Index = NULL;
    while(First_Index <= Last_Index)
    {
        M_Index  = First_Index + (Last_Index - First_Index)/2 ;
        if(*M_Index == goal)
        {
            return (M_Index - data) ;
        }
        else if (goal > *M_Index)
        {
            First_Index = M_Index + 1 ;
        }
        else
        {
            Last_Index = M_Index - 1 ;
        }
    }
    return -1 ;
}
