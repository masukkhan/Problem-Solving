///9. Given two number L and R. Find the digit sum of all numbers between L to R where L<=R
///Example: If L = 10 and R = 12 then,


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
    int l,r,n,i,number,sum=0;
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++)
    {
        number=i;
        int digitSum=0;
        while(number!=0)
        {
            digitSum+=number%10;
            number=number/10;
        }
        sum+=digitSum;
        printf("Digit summation of %d is %d.\n",i,digitSum);
    }
    printf("%d to %d summation is %d\n",l,r,sum);

    return 0;
}
