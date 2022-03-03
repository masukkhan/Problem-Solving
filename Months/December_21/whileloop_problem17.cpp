///Given N, find X and A where N = X*2^A.

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
    int n,i,powerOfTwo=2;      /// initialize with 2^1
    scanf("%d",&n);
    for(i=1;powerOfTwo<=n;i++)
    {
        if(n%powerOfTwo==0)         ///powerOfTwo = 2^i
        {
            printf("X = %d A = %d\n",n/powerOfTwo, i);
        }
        powerOfTwo*=2;
    }

    return 0;
}
