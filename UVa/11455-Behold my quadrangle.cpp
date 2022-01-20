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
    int n,a,b,c,d,i;

    while(1==scanf("%d",&n))
    {
        for(i=0; i<n; i++)
        {
            scanf("%d %d %d %d",&a,&b,&c,&d);
            if(a==b && b==c && c==d && d==a)
            {
                printf("square\n");
            }
            else if((a==c && b==d)||(a==b && c==d)||(b==c && a==d))
            {
                printf("rectangle\n");
            }
            else if(a<=b+c+d && b<=a+c+d && c<=a+b+d && d<=a+b+c)
            {
                printf("quadrangle\n");
            }
            else
            {
                printf("banana\n");
            }

        }



    }

    return 0;
}


