/*Write a C program to find middle between three numbers.*/

#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    int a,b,c,maximum;
    scanf("%d%d%d",&a,&b,&c);
    if((b<a && a<c) || (c<a && a<b))
    {

        printf("A is middle %d\n",a);
    }
    else if((c<b && c>a) || (c>b && c<a))
    {
        printf("C is middle %d\n",c);

    }
    else
    {
        printf("B is middle %d\n",b);
    }

    return 0;
}
