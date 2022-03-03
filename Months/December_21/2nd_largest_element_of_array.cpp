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
    int i,j,n,ar[20];
    while(1==scanf("%d",&n))
    {
        for(i=0; i<n; i++)
            scanf("%d",&ar[i]);

        int firstmax=INT_MIN;
        for(i=0;i<n;i++)
        {
            if(ar[i]>firstmax)
            {
                firstmax=ar[i];
            }
        }

        int secondmax=INT_MIN;
        for(i=0;i<n;i++)
        {
            if(ar[i]==firstmax)
                continue;
            if(ar[i]>secondmax)
                secondmax=ar[i];
        }

        printf("First max = %d\n",firstmax);
        printf("Second max = %d\n",secondmax);
    }

    return 0;
}

