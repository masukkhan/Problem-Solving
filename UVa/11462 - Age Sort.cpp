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

int ar[2000010],cnt[110];

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int i,n,j,x;
    while(1==scanf("%d",&n))
    {
        if(n==0)
            break;

        for(i=0; i<n; i++)
            scanf("%d",&ar[i]);

        memset(cnt,0,sizeof cnt);
        for(i=0; i<n; i++)
            cnt[ar[i]]++;

        bool isFirstTime=true;
        for(i=1;i<=100;i++)
        {
            int val=cnt[i];
            for(j=0;j<val;j++)
            {
                if(isFirstTime)
                {
                    printf("%d",i);
                    isFirstTime=false;
                }
                else
                    printf(" %d",i);
            }
        }
        printf("\n");
    }

    return 0;
}


