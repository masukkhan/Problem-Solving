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

int dr[]={-1,-1,-1,0,0,+1,+1,+1};
int dc[]={-1,0,+1,-1,+1,-1,0,+1};

int row,col;
char str[110][110];

bool IsValid(int r, int c)
{
    if(r>=0 && c>=0 && r<row && c<col)
        return true;
    return false;
}

int check(int r, int c)
{
    int cnt=0;
    for(int i=0;i<8;i++)
    {
        int x=r+dr[i];
        int y=c+dc[i];
        if(IsValid(x,y)==true && str[x][y]=='*')
            cnt++;
    }

    return cnt;
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    char ans[110][110];
    int cnt=1;

    while(2==scanf("%d%d",&row,&col) && !(row==0 && col==0))
    {
        int i,j;
        for(i=0; i<row; i++)
            scanf("%s",str[i]);

        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if(str[i][j]=='*')
                    ans[i][j]='*';
                else
                {
                    int cnt=check(i,j);
                    ans[i][j]=cnt+'0';
                }
            }
            ans[i][col]='\0';
        }

        if(cnt>1)
            printf("\n");

        printf("Field #%d:\n",cnt++);
        for(i=0; i<row; i++)
            printf("%s\n",ans[i]);
    }

    return 0;
}



