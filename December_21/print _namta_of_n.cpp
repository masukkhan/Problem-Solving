///6. Given N. print the "namta" of N.

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
    int i,n,X,result=1;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        result=n*i;
        printf("%d X %d = %d\n",n,i,result);
    }

    return 0;
}
