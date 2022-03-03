#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

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

    stack<int>stck;

    stck.push(10);
    stck.push(20);
    stck.push(30);
    stck.push(40);

    cout<<"stack size = "<<stck.size()<<endl;

    int val = stck.top();
    stck.pop();
    stck.pop();
    cout<<"Front value = "<<val<<endl;
    cout<<"stack size = "<<stck.size()<<endl;


    return 0;
}
