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
    int i,n,even=0,odd=0;
    int ar1[20];
    int ar2[20];
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
            scanf("%d",&ar1[i]);
        for(i=0;i<n;i++)
        {
            if(ar1[i]%2==0)
                even+=ar1[i];
            else
                odd+=ar1[i];
        }
        printf("even sum =%d\n",even);
        printf("odd sum =%d\n",odd);
    }

    return 0;
}
