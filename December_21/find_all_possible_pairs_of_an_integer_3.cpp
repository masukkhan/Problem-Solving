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
    [1,2,3,4]
    1 2
    1 3
    1 4
    2 1
    2 3
    2 4
    3 1
    3 2
    3 4
    4 1
    4 2
    4 3

*/


int main()
{
    int i,j,n;

    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                    continue;
                printf("%d,%d\n",i,j);
            }
        }
    }

    return 0;
}
