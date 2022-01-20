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
    int n;
    scanf("%d",&n);
    char str[100],str1[100];
    int temp=0,i;
    scanf("%s",str);
    for(i=0;i<=n/2;i++)
    {
        str1[i]=str[n-i-1];
        str1[n-i-1]=str[i];
    }
    str1[n]=0;
    printf("%s",str1);
   return 0;
}




