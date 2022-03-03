#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

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
    char str[100],ch;
    gets(str);
    int vowels = 0, consonant = 0, specialChar = 0,
        digit = 0,i;

    for(i=0;str[i]!=0;i++)
        {
            if ( (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= 'A' && str[i] <= 'Z') )
              {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u')
                vowels++;
            else
                consonant++;
              }
        }
        int words=vowels+consonant;

        //printf("Vowels=%d\nConsonent=%d",vowels,consonant);
        printf("Total Words=%d\n",words);

        return 0;

}








