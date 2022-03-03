#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

#include<algorithm>
using namespace std;

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

int ar[100],cnt[10000000];

int main()
{
    int i,n,sum,qr,x;
    while(1==scanf("%d",&n))
    {
        for(i=0; i<n; i++)
            scanf("%d",&ar[i]);

        memset(cnt,0,sizeof cnt);
        for(int i=0; i<n; i++)
        {
            int val=ar[i];
            cnt[val]++;
        }

        scanf("%d",&qr);
        while(qr--)
        {
            scanf("%d",&x);
            printf("Frequency of %d is %d\n",x,cnt[x]);
        }
    }

    return 0;
}

