///Merge two arrays in another array.

#include<math.h>
#include<stdio.h>
#include <stdlib.h>

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
    int i,n,n1,n2,merg[20],merg2[20];
    int ar1[20];
    int ar2[21];
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&ar1[i]);
    }
    for(i=0;i<n1;i++)
    {
        merg[i]=ar1[i];
    }
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&ar2[i]);
    }
    for(i=0;i<n2;i++)
    {
        merg[n1+i]=ar2[i];
    }
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ",merg[i]);
    }

    return 0;
}
