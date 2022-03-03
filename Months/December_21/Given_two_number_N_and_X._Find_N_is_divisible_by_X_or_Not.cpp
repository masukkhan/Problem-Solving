///5. Given two number N and X. Find N is divisible by X or not.

#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    if(n%x==0)
        printf("%d is divisible by %d\n",n,x);
    else
        printf("%d is Not divisible by %d\n",n,x);


    return 0;
}
