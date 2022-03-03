#include<stdio.h>
#include<math.h>


int main()
{
    double x1,x2,y1,y2,distance,X,Y;
    printf("Enter coordinates of first point: ");
    scanf("%lf%lf",&x1,&y1);
    printf("Enter coordinates of Second point: ");
    scanf("%lf%lf",&x2,&y2);
    X=(x2-x1);
    Y=(y2-y1);
    distance = sqrt(X*X+Y*Y);


    printf("Distance = %lf\n",distance);


    return 0;
}
