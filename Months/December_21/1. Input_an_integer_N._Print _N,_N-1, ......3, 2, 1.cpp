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
    int i, n;
    scanf("%d",&n);

    for(i=n;i>=0;i--)
    {
        printf("%d\n",i);
    }

    return 0;
}
