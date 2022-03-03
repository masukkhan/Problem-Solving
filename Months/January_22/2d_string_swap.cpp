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

    char str[10][100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }

    for(int i=0;i<n;i++)
    {
        int len=strlen(str[i]);

        for(int j=0;j<len/2;j++)
        {
            swap(str[i][j],str[i][len-j-1]);

        }
        printf("%s\n",str[i]);

    }




    return 0;
}

