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
    char str[100];
    gets(str);
    int i,c=0,n;
    n=strlen(str);

    for(i=0; i<n/2; i++)
    {
        if(str[i]==str[n-i-1])
            c++;
    }
    if(c==i)
        printf("Word Is Palindrome");
    else
        printf("Word Is Not Palindrome");

    return 0;

}







