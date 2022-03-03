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

    string name = "Masuk";
    cout<<name<<endl;

    string str;

    cin>>str;
    //getline(cin,str);

    cout<<"string size = "<<str.size()<<endl;

    sort(str.begin(),str.end());
    cout<<"Ascending order -> "<<str<<endl;

    sort(str.rbegin(),str.rend());
    cout<<"Descending order -> "<<str<<endl;


    //name = name + " Khan";
    name += " Khan";
    cout<<name<<endl;

    int ind = name.find("uk");
    cout<<"index -> "<<ind<<endl;

    int ind1 = name.find("us");
    cout<<"index -> "<<ind1<<endl;

    return 0;
}
