#include <stdio.h>
#define PI 3.1415
unsigned int circle_Solution(unsigned int redi);

int main()
{
    unsigned int UserNo = 0;
    printf("please enter a circle redious :\n");
    scanf("%i",&UserNo);
    circle_Solution(UserNo);
    return 0;
}

unsigned int circle_Solution(unsigned int redi)
{
    printf("the diameter of the circle = %i \n",2 * redi);
    printf("the circumference of the circle = %0.2f \n",2 * PI * redi);
    printf("the area of the circle = %0.2f \n",PI * redi * redi);
    return 1 ;
}

