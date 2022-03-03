#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

typedef long long ll;

template<class T>T sqr(T a)
{
    return a*a;
}
template<class T> T abs(T x)
{
    if(x<0) return -x;
    return x;
}

const double eps = 1e-8;
const double pi = acos(-1.0);


int main()
{
    char str[100],str1[100],i;
    int index;
    scanf("%s",str);
    scanf("%d",&index);
    for(i=index+1; str[i-1]!=0; i++)
        str[i-1]=str[i];
    printf("%s",str);

    return 0;
}

