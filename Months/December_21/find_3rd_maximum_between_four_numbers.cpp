/*Write a C program to find 3rd maximum between four numbers.*/

#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((a<b && b<c && b<d) || (c<b && a>b && d>b) || (d<b && a>b && c>b))
    {
        printf("B is 3rd maximum %d\n",b);
    }
    else if((a>b && a<c && a<d)||(a>c && a<b && a<d)||(a>d &&a<b && a<c))
    {
        printf("a is 3rd maximum %d\n",a);

    }
    else if((d>c && d<a && d<b) || (d>a && d<b && d<c) || (d>b && d<c && d<a))
    {
        printf("D is 3rd maximum %d\n",d);
    }
    else
    {
        printf("C is 3rd maximum %d\n",c);
    }

    return 0;
}
