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
    int i,n,sum;
    int ar[20];
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);

        sum = 0;
        for(i=0;i<n;i++)
           {
               sum+=ar[i];
               printf("%d ",ar[i]);
           }

        //for(i=0;i<n;i++)

        printf("= %d\n",sum);
    }

    return 0;
}
