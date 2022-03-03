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

char text[1000],pattern[10000];


int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    while(2==scanf("%s%s",text,pattern))
    {
        int textl=strlen(text);
        int patternl=strlen(pattern);

        int i=0;
        int j=0;
        while(i<textl && j<patternl)
        {
            if(text[i]==pattern[j])
            {
                i++;
                j++;
            }
            else
                i++;
        }
        if(j==patternl)
            printf("Subsequence Found");
        else
            printf("Subsequence Not Found");
    }

    return 0;
}

