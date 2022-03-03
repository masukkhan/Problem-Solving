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

///map<key_type , value_type> map_name;


int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    //map<key, value>
    map<string, int>mp;
    mp["a"] = 20;
    mp["b"] = 23;
    mp["c"] = 33;
    mp["a"] = 123;

    for(auto it : mp)
        cout<<it.first<<" "<<it.second<<endl;

    cout<<endl;

    map<long long, int>mp1;
    mp1[1e10] = 1;
    mp1[1e15] = 2;
    mp1[1e18] = 3;
    mp1[2e13] = 4;

    for(auto it : mp1)
        cout<<it.first<<" "<<it.second<<endl;



    return 0;
}
