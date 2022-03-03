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


int main()
{
    int n;
    int i,sum=0,qr,x,ans=0,l,r;
    int ar[100010],cnt[100010];

    while(1==scanf("%d",&n))
    {
        sum=ans=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&ar[i]);
            sum+=ar[i];
            cnt[i]=sum;
        }

        scanf("%d",&qr);
        while(qr--)
        {
            scanf("%d%d",&l,&r);
            if(l>r)
                swap(l,r);
            if(l==0)
                ans=cnt[r];
            else
                ans=cnt[r]-cnt[l-1];
            printf("%d\n",ans);
        }

    }

    return 0;
}


