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
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int tks, ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        int a,c,b,sum=0,mi=-1;
        scanf("%d%d%d",&a,&b,&c);
        if (a <= b && a <= c)
            sum=b+c;
        else if (b <= a && b <= c)
            sum=a+c;
        else
            sum=a+b;
        printf("%d\n",sum);
    }

    return 0;
}

