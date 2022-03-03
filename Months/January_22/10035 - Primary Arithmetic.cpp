#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

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

    int a,b;
    while(2==scanf("%d%d",&a,&b) && ((a==0 && b==0)==false))
    {
        int carry=0,cnt=0,sum=0;
        while(a!=0 && b!=0)
        {
            int last1=a%10;
            int last2=b%10;
            a=a/10;
            b=b/10;
            sum=last1+last2+carry;
            carry=sum/10;
            if(carry==1)
                cnt++;
        }

        while(a!=0)
        {
            int last1=a%10;
            a=a/10;
            sum=last1+carry;
            carry=sum/10;
            if(carry==1)
                cnt++;
        }

        while(b!=0)
        {
            int last2=b%10;
            b=b/10;
            sum=last2+carry;
            carry=sum/10;
            if(carry==1)
                cnt++;
        }

        if(cnt==0)
            printf("No carry operation.\n");
        else if(cnt==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",cnt);
    }

    return 0;
}

