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
        int x,y,x1,x2,y1,y2,mx=0;

        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        x=abs(x1-x2);
        y=abs(y1-y2);
        if(x>y)
            printf("%d\n",x);
        else
            printf("%d\n",y);

    }

    return 0;
}

