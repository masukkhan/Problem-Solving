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
    char str1[100],str2[100];
    int cnt=0;

    while(1==scanf("%s",&str1))
    {
        int i, n=strlen(str1),cnt=0,a=0;
        bool flag = false;
        for(i=0; i<n; i++)
        {
            if(str[i]!='0' && flag==false)
                flag = true;

            if(flag==true)
                str2[cnt++]=str1[i];
        }

        str2[cnt]='\0';
        printf("%s",str2);
    }

    return 0;
}
