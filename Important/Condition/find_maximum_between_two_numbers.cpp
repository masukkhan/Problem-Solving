/*Write a C program to find maximum between two numbers.*/

#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    int a,b,maximum;
    scanf("%d%d",&a,&b);
    if(a>b)
    {

        printf("A is Maximum %d\n",a);
    }
    else
    {
        printf("B is Maximum %d\n",b);

    }

    return 0;
}
