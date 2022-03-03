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

    map<char ,int>mp;

    int i,tks, ks=1;
    char str[10];
    scanf("%d",&tks);
    while(tks--)
    {
        mp.clear();
        scanf("%s",str);
        for(i=0;i<6;i++)
            mp[str[i]]=i;
        if(mp['r']<mp['R'] && mp['g']<mp['G'] && mp['b']<mp['B'])
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
