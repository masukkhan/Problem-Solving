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

    int ar[10000];
    int holiday[] = {6,13,20,27,7,14,21,28};
    int tks, ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        int n,i,j,cnt=8;

        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);

        for(i=0;i<n;i++)
        {
            bool check=false;
            for(j=0;j<=7;j++)
            {
                if(ar[i]==holiday[j])
                    check=true;
            }
            if(check==false)
                cnt++;
        }

        printf("%d\n",cnt);
    }

    return 0;
}

