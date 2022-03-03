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

int IntegerToString(int n, char str[])
{
    int cnt = 0;
    while(n!=0)
    {
        str[cnt++] =(n%10)+'0';
        n/=10;
    }
    str[cnt]='\0';
    return cnt;
}

void StringReverse(int n, char str[])
{
    for(int i=0;i<n/2;i++)
        swap(str[i],str[n-i-1]);
}

int CountCarry(char str[], int startIndex, int previousCarry)
{
    int cnt=0;
    for(int i=startIndex;i>=0;i--)
    {
        int sum=(str[i]-'0')+previousCarry;
        if(sum>9)
        {
            previousCarry=1;
            cnt++;
        }
        else
        {
            previousCarry=0;
        }
    }
    return cnt;
}

int main()
{
    int a,b;
    char str1[20],str2[20];
    while(2==scanf("%d%d",&a,&b) && ((a==0 && b==0)==false))
    {
        int len1= IntegerToString(a, str1);
        StringReverse(len1, str1);

        int len2= IntegerToString(b, str2);
        StringReverse(len2, str2);

        int sum=0,carry=0,cnt=0;
        len1--,len2--;
        while(len1>=0 && len2>=0)
        {
            int digit1=str1[len1--]-'0';
            int digit2=str2[len2--]-'0';
            int sum=digit1+digit2+carry;
            if(sum>9)
            {
                carry=1;
                cnt++;
            }
            else
                carry=0;
        }
        if(len1>=0)
            cnt+= CountCarry(str1, len1, carry);

        if(len2>=0)
            cnt+= CountCarry(str2, len2, carry);

        if(cnt==0)
            printf("No carry operation.\n");
        else if(cnt==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",cnt);

    }

    return 0;
}
