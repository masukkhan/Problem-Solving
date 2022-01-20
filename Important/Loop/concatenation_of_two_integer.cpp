///concatenation of two integer


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
    int a,b,rev=0,rem;
    scanf("%d%d",&a,&b);
    int conca=a;
    while(b!=0)
    {
        rem=b%10;
        rev=rev*10+rem;
        b=b/10;
    }
    for(;rev!=0;)
    {
        rem=rev%10;
        conca=conca*10+rem;
        rev=rev/10;
    }
    printf("%d\n",conca);

    return 0;
}
