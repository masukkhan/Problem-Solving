///7. Input an array and an extra variable X. Find X is appears in that array or not.

#include<math.h>
#include<stdio.h>
#include <stdlib.h>

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
    int i,n,x;
    int ar1[20];
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
            scanf("%d",&ar1[i]);
        scanf("%d",&x);
        int found=-1;
        for(i=0;i<n;i++)
        {
            if(x==ar1[i])
            {
                found=i;
                break;
            }
        }
        if(found!=-1)
             printf("Number Exist");
        else
            printf("Number Does Not Exist");
    }

    return 0;
}
