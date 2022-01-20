///8. Write a C program to find whether a given year is a leap year or not.
#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    int y;
    scanf("%d",&y);
    if(y%400==0)
    {
        printf("Year is A Leap Year %d\n",y);
    }
    else if(y%4==0 && y%100!=0)
    {
        printf("Year is A Leap Year %d\n",y);
    }
    else
        printf("Year is Not A Leap Year %d\n",y);

    return 0;
}
