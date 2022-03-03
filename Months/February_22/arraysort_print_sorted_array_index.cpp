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
int i,s,n,ar[100];
    int tks, ks=1;

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    map<int, int>mp;


    scanf("%d",&tks);
    while(tks--)
    {
       scanf("%d",&n);
       for(i=0;i<n;i++)
            scanf("%d",&ar[i]);
       sort(ar,ar+n);
       for(i=0;i<n;i++)
     {
         s=i;
         mp[s]++;
         printf("%d",mp[s]);
     }


    }

    return 0;
}

