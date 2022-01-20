 ///Print summation of odd numbers and even numbers seperately of an array.

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
    int i,n,evensum=0,oddsum=0;
    int ar1[20];
    int odd[20], even[20];
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
            scanf("%d",&ar1[i]);

        int oddCount=0,evenCount=0;
        for(i=0;i<n;i++)
        {
            if(ar1[i]%2==0)
            {
                even[evenCount]=ar1[i];
                evensum+=even[evenCount];
                evenCount++;
            }
            else
            {
                odd[oddCount]=ar1[i];
                oddsum+=odd[oddCount++];
            }
        }
        printf("Even sum=%d\nodd Sum=%d\n",evensum,oddsum);
    }

    return 0;
}
