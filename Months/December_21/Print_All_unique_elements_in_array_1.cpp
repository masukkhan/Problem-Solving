

#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#define newLine printf("\n")

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

/*
     1 4 3 4 1
*/

int main()
{
    int ar[20];
    int distinct[20];
    int n,i,j;
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        int uniqueCounter=0;
        for(i=0;i<n;i++)
        {
            bool isFirstTime=true;
            for(j=0;j<i;j++)
            {
                if(ar[i]==ar[j])
                {
                    isFirstTime=false;
                    break;
                }
            }
            if(isFirstTime)
                distinct[uniqueCounter++]=ar[i];
        }
        for(i=0;i<uniqueCounter;i++)
            printf("%d ",distinct[i]);
        newLine;
    }


    return 0;
}
