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

    priority_queue<int>pq;

    pq.push(1);
    pq.push(3);
    pq.push(2);

    cout<<"Top: "<<pq.top()<<endl;
    pq.pop();

    cout<<"Top: "<<pq.top()<<endl;
    pq.pop();

    return 0;
}
