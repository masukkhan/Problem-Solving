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
        float x1,x2,y1,y2;
        scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
        float ans1=y1/x1;
        float ans2=y2/x2;

        if(ans1==ans2)
            printf("0\n");

        if(ans1<ans2)
            printf("-1\n");

        else if(ans2<ans1)
            printf("1\n");
    }

    return 0;
}


