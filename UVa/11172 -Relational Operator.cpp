#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

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
    int n,a,b;

    while(1==scanf("%d",&n))
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d%d",&a,&b);
            if(a>b)
                printf(">\n");
            else if(a<b)
                printf("<\n");
            else
                printf("=\n");

        }

    }



    return 0;
}

