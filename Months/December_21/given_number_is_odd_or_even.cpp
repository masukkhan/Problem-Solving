///Write a C program to check whether a given integer in odd or even.
#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
        printf("Number is Even %d\n",a);
    else
        printf("Number is Odd %d",a);
    return 0;
}
