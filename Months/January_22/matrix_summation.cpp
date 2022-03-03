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
/*
2 4  5 6  7
3 5  6 7

*/

int main()
{
    int ar1[20][20],ar2[20][20],sum[20][20];
    int r,c,row,col;
    scanf("%d%d",&row,&col);
    for(r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
            scanf("%d",&ar1[r][c]);
    }
    for(r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
            scanf("%d",&ar2[r][c]);
    }
    for(r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
        {
            sum[r][c]=ar1[r][c]+ar2[r][c];
        }
    }
    for(r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
        {
            if(c==0)
                printf("%d",sum[r][c]);
            else
                printf(" %d",sum[r][c]);
        }
         printf("\n");
    }

    return 0;
}
