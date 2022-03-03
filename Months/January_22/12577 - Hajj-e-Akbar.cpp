#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

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

    char str[10];
    int cnt=1;
    while(1==scanf("%s",str))
    {
        if(strcmp(str,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",cnt++);
        else if(strcmp(str,"Umrah")==0)
            printf("Case %d: Hajj-e-Asghar\n",cnt++);
        else
            break;
    }

    return 0;
}
