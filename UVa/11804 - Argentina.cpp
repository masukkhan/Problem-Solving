#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

#include<map>
#include<set>
#include<stack>
#include<queue>
#include<iostream>
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

struct player
{

    char name[21];
    int attack,defence;

};

bool compare(player a, player b)
{
    if(a.attack==b.attack && a.defence==b.defence)
        return strcmp(a.name,b.name)<0;

    if(a.attack==b.attack)
        return a.defence<b.defence;

    return a.attack>b.attack;
}

bool compareName(player a,player b)
{
    return strcmp(a.name,b.name)<0;

}


int main()
{
////    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int tks,i, ks=1;
    scanf("%d",&tks);
    player ar[21];
    while(tks--)
    {
        for(i=0; i<10; i++)
        {
            scanf("%s",ar[i].name);
            scanf("%d",&ar[i].attack);
            scanf("%d",&ar[i].defence);
        }
        sort(&ar[0],&ar[10],compare);
        sort(&ar[0],&ar[5],compareName);
        sort(&ar[5],&ar[10],compareName);

        printf("Case %d:\n",ks);

        printf("(");
        for(i =0;i<5;i++)
        {
            printf("%s",ar[i].name);
            if(i==4)
                break;
            printf(", ");
        }

        printf(")\n");
        printf("(");

        for(i=5;i<10;i++)
        {
            printf("%s",ar[i].name);
            if(i==9)
                break;
            printf(", ");
        }


        printf(")\n");
        ks++;
    }

    return 0;
}
