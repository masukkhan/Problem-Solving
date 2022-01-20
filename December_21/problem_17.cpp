///17. Given N, find X and A where N = X*2^A.


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
    int n,x,a=1;
    int division;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==0)
        {
            x=n/2;
            break;
        }
        else
        {
            x=(n/2);

            break;
        }

    }
    printf("X = %d A = %d",x,a);

    return 0;
}
