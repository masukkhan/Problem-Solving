#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

#include<set>
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

    ///FIFO: First in first out.

    queue<string>q;
    q.push("ABC");
    q.push("DEF");
    q.push("G");
    q.push("HIJK");

    cout<<"Q size = "<< q.size()<<endl;
    cout<<"Q isEmpty = "<< q.empty()<<endl;

    cout<<endl;
    string str = q.front();
    q.pop();
    cout<<"Front element = "<<str<<endl;
    cout<<"Q size = "<< q.size()<<endl;

    cout<<endl;
    str = q.front();
    q.pop();
    cout<<"Now front element = "<<str<<endl;
    cout<<"Q size = "<< q.size()<<endl;

    while(!q.empty())
        q.pop();

    cout<<"After clear Q size = "<< q.size()<<endl;

    return 0;
}
