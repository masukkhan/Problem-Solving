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
        int n = strlen(str);
        for(int i=0;i<n/2;i++)
        {
            char temp = str[i];
            str[i] = str[n-i-1];
            str[n-i-1] = temp;
//            swap(str[i],str[n-i-1]);
        }
        printf("Reverse String = %s\n",str);
    }

    return 0;
}
