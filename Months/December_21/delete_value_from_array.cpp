#include<math.h>
#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

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
    1 3 4 6 7
in  0 1 2 3 4
index=2 value=10

    1 3 10 4 6 7
    0 1  2 3 4 5
*/


int main()
{
    int i,n,ar[20];
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);

        int index;
        scanf("%d",&index);
        for(i=index+1;i<n;i++)
            ar[i-1]=ar[i];

        for(i=0;i<n-1;i++)
            printf("%d ",ar[i]);
        printf("\n");

    }

    return 0;
}
