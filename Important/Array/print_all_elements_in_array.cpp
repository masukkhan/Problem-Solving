///print all the elements of array.

#include<math.h>
#include<stdio.h>
#include <stdlib.h>

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
    int i,n;
    int arr[20];
    //scanf("%d",&n);
    while(1==scanf("%d",&n))
    {
        for(i=0;i<n;i++)
        {
             scanf("%d",&arr[i]);
             printf("%d\n",arr[i]);
        }
    }


    return 0;
}
