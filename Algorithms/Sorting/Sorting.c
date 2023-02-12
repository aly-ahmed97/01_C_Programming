#include "Sorting.h"
static void  Swap_numbers(unsigned int *X,unsigned int *Y);

void Bubble_Sorting(unsigned int *data , unsigned int length)
{
    unsigned int index1 = 0;
    unsigned int index2 = 0;
    for(index1 = 0 ; index1 < length - 1; index1++)
    {
        for(index2 = index1+1 ; index2 < length ; index2++)
        {
            if(*(data+index1) > *(data+index2))
            {
                Swap_numbers(data+index1,data+index2);
            }
            else
            {
                //nothing
            }
        }
    }
}
void Insertion_Sorting  (unsigned int *data , unsigned int length)
{
    unsigned int index1 = 0 ;
    signed int index2 = 0 ;
    unsigned int key = 0 ;
    for(index1 = 1 ; index1 < length ; index1++)
    {
        index2 = index1 -1 ;
        key = *(data+index1);
        while( (key < *(data+index2)) && (index2 >= 0 ) )
        {
            *(data+index2+1) = *(data+index2) ;
            index2--;
        }
        *(data+index2+1) = key ;
    }
}
void Selection_Sorting  (unsigned int *data , unsigned int length  )
{
    unsigned int index1 = 0 ;
    unsigned int index2 = 0 ;
    unsigned int Min_Index = 0 ;
    for(index1 = 0 ; index1 < length-1 ; index1++)
    {
        Min_Index = index1 ;
        for(index2 = index1+1 ; index2 < length ; index2++)
        {
            if(*(data+index2) < *(data+Min_Index))
            {
                Min_Index = index2 ;
            }
            else
            {
                //nothing
            }
        }
        Swap_numbers((data+Min_Index),(data+index1));
    }
}
static void  Swap_numbers(unsigned int *X,unsigned int *Y)
{
    unsigned int temp = 0 ;
    temp = *X ;
    *X = *Y;
    *Y = temp ;
}
