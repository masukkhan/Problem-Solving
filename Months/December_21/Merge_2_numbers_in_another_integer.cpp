///Merge 2 numbers in another integer.

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
    int n,m,merg=0;
    scanf("%d%d",&n,&m);
    while(n!=0)
    {
        printf("%d",m);
        printf("%d",n);
    }

    return 0;
}
