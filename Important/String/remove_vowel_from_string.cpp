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

bool isVowel(char ch)
{
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
       ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        return true;
    }
    return false;
}

int main()
{
    char str[100], newString[100];
    while(1==scanf("%s",str))
    {
        int len = strlen(str);
        int cnt = 0;
        for(int i=0;i<len;i++)
        {
            if(isVowel(str[i]) == false)
            {
                newString[cnt]=str[i];
                cnt++;
            }
//            if(isVowel(str[i]))
//                continue;
//            else
//            {
//                newString[cnt]=str[i];
//                cnt++;
//            }
        }
        newString[cnt]='\0';

        printf("%s\n",newString);
    }

    return 0;
}
