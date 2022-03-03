#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

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
    char str[100],i;
    scanf("%s",str);
    int cnt=0;
    for(i=0;str[i]!=0;i++);
    printf("Total Words-> %d\n",i);
    return 0;
}

