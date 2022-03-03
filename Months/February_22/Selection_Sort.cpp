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

    int ar[100];
    int n,i,j,minimum;
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);

        for(i=0;i<n-1;i++)
        {
            minimum=i;
            for(j=i+1;j<n;j++)
            {
                if(ar[j]<ar[minimum])
                {
                    minimum=j;
                }
            }
            if(minimum!=i)
            {
                swap(ar[i],ar[minimum]);
            }
        }

        for(i=0;i<n;i++)
            printf("%d ",ar[i]);
    }


    return 0;
}
