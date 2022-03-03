///Find all divisors of a number N.

#include<math.h>
#include<stdio.h>
#include <stdlib.h>

typedef long long ll;

template<class T>T sqr(T a){
    return a*a;
}
template<class T> T abs(T x){
    if(x<0) return -x;
    return x;
}

const double eps = 1e-8;
const double pi = acos(-1.0);
int main()
{
    int i,j,n,mid=0,divisor=0;
    scanf("%d",&n);
    mid=n/2;
    for(i=1;i<=mid;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
    printf("%d\n",n);

    return 0;
}
