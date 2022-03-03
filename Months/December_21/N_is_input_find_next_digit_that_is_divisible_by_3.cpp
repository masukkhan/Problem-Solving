///Given a numbe N, find smallest number which is  divisible by 3 and greater than N.
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
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        n=n+1;
        if(n%3==0)
            break;
        else
            continue;
    }
    printf("%d",n);

    return 0;
}
