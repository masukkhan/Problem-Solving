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
    while(1==scanf("%s",str))
    {
        int len = strlen(str);

        int val = 0;
        for(int i=0;i<len;i++)
        {
            int x = str[i] - '0';   ///Ascii of zero equal 48
            val = val * 10 + x;
        }

        printf("Value is = %d\n",val);
    }

    return 0;
