///8.maximum and minimum element in an array.

#include<math.h>
#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

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
    int i,n,x;
    int ar1[20];
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
            scanf("%d",&ar1[i]);
        int maxIndex=-1,minIndex=-1;
        int maximum=INT_MIN, minimum=INT_MAX; // max and minimum er value array er 0 index dhora lage kn other value dhorle kaj kn kore na//
        for(i=0;i<n;i++)
        {
            if(ar1[i]>maximum)
            {
                maximum=ar1[i];
                maxIndex=i;
            }
            if(ar1[i]<minimum)
            {
                minimum=ar1[i];
                minIndex=i;
            }
        }
        printf("Index=%d  Maximum Value = %d\n",maxIndex,maximum);
        printf("Index=%d  Minumum Value = %d\n",minIndex,minimum);

    }

    return 0;
}
