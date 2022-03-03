/*Write a C program to find maximum between three numbers.*/
#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    int a,b,c,maximum;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("A is Maximum %d\n",a);
    }
    else if(b>a && b>c)
    {
        printf("B is Maximum %d\n",b);
    }
    else
    {
        printf("C is maximum %d\n",c);
    }

    return 0;
}

