
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

/*

7
10 20 10 30 15 25 40
answer = 100

*/

int main()
{
    int i,j,n,ar[20];
    while(1==scanf("%d",&n))
    {
        for(i=0; i<n; i++)
            scanf("%d",&ar[i]);

        int sum=0;
        for(i=0; i<n; i++)      ///This loop is checking each of every number is a rich number or not.
        {
           bool isRichNumber=true;
           for(j=0;j<i;j++)     ///This loop is checking either a number is reach number or not.
           {                    ///In other words this loop is checking is there any previous element
               if(ar[j]>=ar[i]) ///which is greater than or equal to the current element or not.
               {
                   isRichNumber=false;
                   break;
               }
           }
           if(isRichNumber)
               sum+=ar[i];
        }
        printf("%d\n",sum);
    }

    return 0;
}
