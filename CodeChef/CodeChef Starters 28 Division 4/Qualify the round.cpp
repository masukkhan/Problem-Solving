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
        int x,a,b,ans=0;
        scanf("%d%d%d",&x,&a,&b);
        ans=((a*1)+(b*2));
        if(ans>=x)
            printf("Qualify\n");
        else
            printf("NotQualify\n");

    }

    return 0;
}


