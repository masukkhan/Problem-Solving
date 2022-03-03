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
    int n,i,j,temp;
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);

        for(i=1;i<n;i++)
        {
            temp=ar[i];
            j=i-1;
            while(j>=0 && ar[j]>temp)
            {
                ar[j+1]=ar[j];
                j--;
            }
            ar[j+1]=temp;
        }

        for(i=0;i<n;i++)
            printf("%d ",ar[i]);
    }

    return 0;
}
