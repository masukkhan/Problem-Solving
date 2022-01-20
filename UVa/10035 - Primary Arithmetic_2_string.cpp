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

    char str1[20],str2[20];
    int a,b;
    while(2==scanf("%d%d",&a,&b) && ((a==0 && b==0)==false))
    {
        int len1=0;
        while(a!=0)
        {
            str1[len1]=(a%10)+'0';
            a=a/10;
            len1++;
        }
        str1[len1]='\0';

        for(int i=0;i<len1/2;i++)
            swap(str1[i],str1[len1-i-1]);

        int len2=0;
        while(b!=0)
        {
            str2[len2]=(b%10)+'0';
            b=b/10;
            len2++;
        }
        str2[len2]='\0';

        for(int i=0;i<len2/2;i++)
            swap(str2[i],str2[len2-i-1]);

        int sum=0,carry=0,cnt=0;
        while(len1>0 && len2>0)
        {
            int digit1 = str1[len1-1]-'0';
            int digit2 = str2[len2-1]-'0';
            sum=digit1+digit2+carry;

            if(sum>9)
            {
                carry=1;
                cnt++;
            }
            else
            {
                carry=0;
            }
            len1--;
            len2--;
        }

        while(len1>0)
        {
            sum=carry+(str1[len1-1]-'0');
            if(sum>9)
            {
                carry=1;
                cnt++;
            }
            else
            {
                carry=0;
            }
            len1--;
        }

        while(len2>0)
        {
            sum=carry+(str2[len2-1]-'0');
            if(sum>9)
            {
                carry=1;
                cnt++;
            }
            else
            {
                carry=0;
            }
            len2--;
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
