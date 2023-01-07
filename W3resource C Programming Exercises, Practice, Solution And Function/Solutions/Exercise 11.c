#include <stdio.h>
unsigned int Anagram_Strings(const unsigned char str1[],const unsigned char str2[]);
int main()
{
    unsigned char str1[21] ;
    unsigned char str2[21] ;
    printf("please enter the First String with max. 20 chars :\n");
    scanf("%s",&str1);
    printf("please enter the Second String with max. 20 chars :\n");
    scanf("%s",&str2);
    Anagram_Strings(str1,str2);
    return 0;
}

unsigned int Anagram_Strings(const unsigned char str1[],const unsigned char str2[])
{
    unsigned int index1 = 0 ;
    unsigned int index2 = 0 ;
    unsigned int counter1 = 0 ;
    unsigned int counter2 = 0 ;
    unsigned int flag1 = 0 ;
    unsigned int flag2 = 0 ;
    while(str1[index1]!= '\0')
    {
        index1++;
    }
    counter1 = index1;
    while(str2[index1]!= '\0')
    {
        index1++;
    }
    counter2 = index1;
    if(counter1 != counter2)
    {
        printf("Not  Anagram\n");
    }
    else
    {
        for(index1 = 0 ; index1 < counter1 ;index1++)
        {
            for(index2 = 0 ; index2 < counter1 ;index2++)
            {
                if(str1[index1]== str2[index2])
                {
                    flag1++;
                    break;
                }
            }
        }
        for(index1 = 0 ; index1 < counter1 ;index1++)
        {
            for(index2 = 0 ; index2 < counter1 ;index2++)
            {
                if(str2[index1]== str1[index2])
                {
                    flag2++;
                    break;
                }
            }
        }
        if(flag1 == flag2 && flag1 == counter1)
        {
            printf("yes , they Are Anagram Strings\n");
        }
        else
        {
            printf("Not Anagram\n");
        }
    }
    return 1 ;
}
