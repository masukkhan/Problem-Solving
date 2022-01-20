///Reverse an array.

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

/*
      6 7 8 9 10
index 0 1 2 3 4
     10 9 8 7 6
*/

int main()
{
    int i,n;
    int ar1[20];
    int ar2[20];
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
            scanf("%d",&ar1[i]);
        for(i=0;i<n/2;i++)
        {
            ar2[i]=ar1[n-i-1];
            ar2[n-i-1]=ar1[i];
            //printf("Elements copied in ar2 =%d\n",ar2[i]);
        }
        for(i=0;i<n;i++)
            printf("%d ",ar2[i]);

    }

    return 0;
}

