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
    char str[100];
    while(1==scanf("%s",str))   ///Assume all characters are in lower case.
    {
        int len = strlen(str);
        int maxCount = 0;
        char ansChar;
        for(int i=0;i<26;i++)
        {
            char ch = 'a' + i;
            int cnt = 0;
            for(int j=0;j<len;j++)
            {
                if(ch==str[j])
                    cnt++;
            }

            if(cnt>maxCount)
            {
                maxCount = cnt;
                ansChar = ch;
            }
        }

        printf("Maximum occurring character is -> %c, %d times\n",ansChar, maxCount);

    }

    return 0;
}
