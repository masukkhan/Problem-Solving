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

int CycleLength(int n)
{
    int cnt=1;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=(3*n)+1;
        }
        cnt++;
    }
    return cnt;
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int j,a,n,b;
    while(2==scanf("%d%d",&a,&b))
    {
        int temp1=a,temp2=b;
        if(a>b)
            swap(a,b);

        int mx=0;
        for(int i=a;i<=b;i++)
        {
            int length=CycleLength(i);
            if(mx<length)
                mx=length;
        }
        printf("%d %d %d\n",temp1,temp2,mx);
    }

    return 0;
}

