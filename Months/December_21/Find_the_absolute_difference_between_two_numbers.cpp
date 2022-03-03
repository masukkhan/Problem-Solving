///9. Find the absolute difference between two numbers.

#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    int a,b;
    int diff;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    diff=abs(a-b);

    printf("Absolute value is %d",diff);
    return 0;
}
