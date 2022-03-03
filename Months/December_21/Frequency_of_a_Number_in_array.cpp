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
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int i,x,n,ar[20];
    while(1==scanf("%d",&n))
    {
        for(i=0; i<n; i++)
            scanf("%d",&ar[i]);
        scanf("%d",&x);
        int cnt=0;
        for(i=0;i<n;i++)
        {
            if(ar[i]==x)
                cnt++;
        }
        printf("Frequency of %d is %d\n",x,cnt);
    }

    return 0;
}

