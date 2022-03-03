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


void StringReverse(char str[])
{
    int len=strlen(str);
    for(int i=0;i<len/2;i++)
    {
        char temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
}

int RemainingSum(char str[], int startIndex, int previousCarry, char str3[], int cnt)
{
    for(int i=startIndex;i>=0;i--)
    {
        int sum = (str[i]-'0') + previousCarry;
        str3[cnt++]=(sum%10)+'0';

        if(sum>9)
            previousCarry = 1;
        else
            previousCarry = 0;
    }

    if(previousCarry==1)
        str3[cnt++]='1';

    return cnt;
}

void StringSum(char str1[], char str2[])
{
    char str3[1010];
    int sum=0,carry=0,ans=0,cnt=0;
    int len1=strlen(str1);
    int len2=strlen(str2);

    len1--,len2--;
    while(len1>=0 && len2>=0)
    {
        int digit1=str1[len1--]-'0';
        int digit2=str2[len2--]-'0';

        sum=digit1+digit2+carry;
        str3[cnt++]=(sum%10)+'0';

        if(sum>9)
            carry=1;
        else
            carry=0;
    }

    if(len1>-1)
       cnt=RemainingSum(str1,len1,carry,str3,cnt);
    else if(len2>-1)
        cnt=RemainingSum(str2,len2,carry,str3,cnt);
    else if(carry==1)
        str3[cnt++]='1';

    str3[cnt]='\0';
    StringReverse(str3);
    strcpy(str1,str3);
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    char str1[1010],str2[1010];
    scanf("%s",str1);
    while(1==scanf("%s",str2) && (strcmp(str2,"0")!=0))
    {
        StringSum(str1,str2);
    }
    printf("%s\n",str1);

    return 0;
}

