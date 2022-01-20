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

    int ar1[20][20],ar2[20][20],result[20][20];
    int r,i,j,k,c,row1,col1,row2,col2;

    scanf("%d%d",&row1,&col1);
    for(r=0;r<row1;r++)
    {
        for(c=0;c<col1;c++)
            scanf("%d",&ar1[r][c]);
    }

    scanf("%d%d",&row2,&col2);
    for(r=0;r<row2;r++)
    {
        for(c=0;c<col2;c++)
            scanf("%d",&ar2[r][c]);
    }

    if(col1!=row2)
    {
        printf("Multiplication Is Not Possible");
        return 0;
    }

    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            result[i][j]=0;
            for(k=0;k<row2;k++)
                result[i][j]+=ar1[i][k]*ar2[k][j];
        }
    }

    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            if(j==col2-1)
                printf("%d\n",result[i][j]);
            else
                printf("%d ",result[i][j]);
        }
    }

    return 0;
}

