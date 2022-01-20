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

bool Isvowel(char ch)
{
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
     ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
     {
          return true;
     }
       return false;
}


int main()
{
    char str[100];
    while(1==scanf("%s",str))
    {
        int i,n=strlen(str);
        int vowel = 0, consonant = 0;
        for(i=0;i<n;i++)
        {
            if(Isvowel(str[i])==true)
                vowel++;
            else
                consonant++;
        }
        printf("Vowel = %d Consonant = %d\n",vowel, consonant);
    }
    return 0;
}
