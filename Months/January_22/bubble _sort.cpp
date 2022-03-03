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

    int i,j,n;
    int ar[100];

    while(1==scanf("%d",&n))
    {
        for(i=0; i<n; i++)
            scanf("%d",&ar[i]);

        for(i=0; i<n-1; i++)
            for(j=0; j<n-1-i; j++)
                if(ar[j]>ar[j+1])
                    swap(ar[j],ar[j+1]);

         for (i=0;i<n;i++)
            printf("%d ",ar[i]);
        printf("\n");

        return 0;
    }
}

