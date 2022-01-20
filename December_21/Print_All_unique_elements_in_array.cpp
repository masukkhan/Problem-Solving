

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
     1 4 3 4 1
*/

int main()
{
    int ar[20];
    int n,i,j;
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(ar[i]==ar[j])
                    break;
            }
            if(i==j)
                printf("%d\n",ar[i]);
        }
    }


    return 0;
}
