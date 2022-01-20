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
    char str1[100];
    char str2[100];
    char str3[100];
    gets(str1);
    //gets(str2);
    gets(str3);
    int i,c=0,n;
    for(i=0;str1[i]!=0;i++)
    {
        str2[i]=str1[i];
    }
    str2[i]=0;
    n=strlen(str2);

    for(i=0;str3[]!=0;i++)
    {
        str2[n+i]=str3[i];
    }
    str2[n+i]=0;
    printf("%s",str2);

        return 0;

}








