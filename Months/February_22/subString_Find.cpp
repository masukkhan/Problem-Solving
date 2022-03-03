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

/**
Text    =   "EDABCDEFGA"
Pattern =   "ABCD"

"ABABADE"
"ABAD"

"ABCD"
"CDE"
*/

char Text[110];
char Pattern[110];

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    while(2==scanf("%s%s",Text,Pattern))
    {
        int textLength = strlen(Text);
        int patternLength = strlen(Pattern);
        int i=0, j=0;

        ///Two pointer technique
        bool substringFound=false;
        while(i<textLength)
        {
            if(Text[i]==Pattern[0])
            {
                int k = i;
                for(j=0;k<textLength && j<patternLength;j++,k++)
                {
                    if(Text[k]==Pattern[j])
                        continue;
                    else
                        break;
                }
                if(j==patternLength)
                {
                    substringFound = true;
                    break;
                }
            }

            i++;
        }

        if(substringFound)
            printf("SubString Found\n");
        else
            printf("SubString Not Found\n");
    }

    return 0;
}
