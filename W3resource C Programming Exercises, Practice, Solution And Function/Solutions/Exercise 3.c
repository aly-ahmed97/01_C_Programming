#include <stdio.h>
int swap(unsigned int *numberOne,unsigned int *numberTwo);
int main()
{
    unsigned int numberOne = 0;
    unsigned int numberTwo = 0;
    printf("please enter the Number 1:\n");
    scanf("%i",&numberOne);
    printf("please enter the Number 2:\n");
    scanf("%i",&numberTwo);
    printf("number 1  = %i , and number 2 = %i\n",numberOne,numberTwo);
    swap(&numberOne,&numberTwo);
    printf("number 1  = %i , and number 2 = %i\n",numberOne,numberTwo);
    return 0;
}
int swap(unsigned int *numberOne,unsigned int *numberTwo)
{
    unsigned int temp = *numberOne;
    *numberOne = *numberTwo ;
    *numberTwo = temp ;
    return 1 ;
}
