#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

#include<map>
#include<set>
#include<stack>
#include<queue>
#include<iostream>
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
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);


    int tks, ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        long long int n1, n2, i, gc=0, lcm=0,ans=0;
        scanf("%lld %lld", &n1, &n2);

        gc=__gcd(n1,n2);

        lcm=(n1 * n2)/gc;

        ans=lcm/n1;

        printf("%d\n",ans);
    }

    return 0;
}


