///13. Given a character C. Determine the character is a vowel or consonant.

#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    char c;
    scanf("%c",&c);
    if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
        printf("%c Given Input is a Vowel \n",c);
    else if ((c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
        printf("%c Given Input is a Vowel \n",c);
    else
        printf("%c Given Input is a Consonent \n",c);

    return 0;
}
