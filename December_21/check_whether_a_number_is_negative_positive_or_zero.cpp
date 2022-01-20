///Write a C program to check whether a number is negative, positive or zero.
#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    int a;
    scanf("%d",&a);
    if(a==0)
        printf("A is Zero %d\n",a);
    else if(a<0)
        printf("A is Negative %d\n",a);
    else
        printf("A is Positive %d\n",a);


    return 0;
}
