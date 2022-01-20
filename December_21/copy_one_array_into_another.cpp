///3. Copy one array into another array.

#include<math.h>
#include<stdio.h>
#include <stdlib.h>

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
    int i,n;
 //   double ave=0,sum=0;
    int ar1[20];
    int ar2[20];
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
            scanf("%d",&ar1[i]);
        for(i=0;i<n;i++)
        {
            ar2[i]=ar1[i];
        }
        for(i=0;i<n;i++)
            printf("%d ",ar2[i]);

    }

    return 0;
}

