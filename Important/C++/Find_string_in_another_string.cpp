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

     int i,n,qr,j;
     string fstr, str[100];
     map<string,int>mp;

     scanf("%d",&n);
     for(i=0;i<n;i++)
        cin>>str[i];

     for(i=0;i<n;i++)
     {
         string s=str[i];
         mp[s]++;
//         int temp=str[i].size();
//         for(j=0;j<temp;j++)
//            cout<<str[i][j]<<endl;
     }

     scanf("%d",&qr);
     while(qr--)
     {
         cin>>fstr;
         if(mp.find(fstr)==mp.end())
            cout<<0<<endl;
         else
            cout<<mp[fstr]<<endl;
     }

    return 0;
}

