#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

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

    int i,x,n;
    vector<int>vec;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }

    cout<<"vector size = "<<vec.size()<<endl;
    for(i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;

//    sort(vec.begin(), vec.end());
    sort(vec.rbegin(), vec.rend());

    cout<<"Sorted:"<<endl;
    for(i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    vec.clear();

    return 0;
}
