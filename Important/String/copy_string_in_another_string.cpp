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
    char str[100],str1[100],i;
    scanf("%s",str);
    int asci=0,asci2=0;
    //scanf("%s",str1);
    for(i=0;str[i]!=0;i++)
    {
        str1[i]=str[i];
    }
    str1[i]=0;
    printf("%s",str1);
   return 0;
}



