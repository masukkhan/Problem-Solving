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
    scanf("%s",str1);
    int n=strlen(str),m=strlen(str1);
    int minimum=n;
    if(m<minimum)
        minimum=m;
    for(i=0;i<minimum;i++)
    {
        if(str[i]==str1[i])
            continue;
        else
            break;
    }

    if(minimum==i&&n==m)
        printf("Same Word");
    else
        printf("Not Same Word");


   return 0;
}


