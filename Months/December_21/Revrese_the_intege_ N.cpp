///Input an integer N. Revrese the integer N.

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
    int n,rem=0,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev =rev*10+rem;
        n=n/10;
    }
    printf("%d\n",rev);


    return 0;
}
