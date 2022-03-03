#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

typedef long long ll;

template<class T>T sqr(T a)
{
    return a*a;
}
template<class T> T abs(T x)
{
    if(x<0) return -x;
    return x;
}

const double eps = 1e-8;
const double pi = acos(-1.0);


int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    long long int n,a,b,c,d,i;

    while(2==scanf("%lld%lld",&a,&b))
    {
       if(a>b)
        printf("%lld\n",a-b);
       else
        printf("%lld\n",b-a);
    }

    return 0;
}



