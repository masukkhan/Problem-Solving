///Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene

#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a==b) &&  (b==c))
    {
        printf("Triangle is Equilateral\n");
    }
    else if ((a==b) || (b==c) || (c==a))
    {
        printf("Triangle is Isosceles\n");
    }
    else
    {
        printf("Triangle is Scalene\n");
    }

    return 0;
}
