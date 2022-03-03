#include<stdio.h>
#include<math.h>
//#define pi 3.1416

int main()
{
    double r,area;

    scanf("%lf",&r);
    double pi = acos(-1.0);
    area=pi*(r*r);
    printf("Area = %lf\n",area);



    return 0;
}
