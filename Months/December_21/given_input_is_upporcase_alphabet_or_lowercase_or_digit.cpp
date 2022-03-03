///12. Given a character C. Determine the character is an uppercase alphabet or lowercase alphabet or a digit.

#include<math.h>
#include<stdio.h>
#include <stdlib.h>


const double pi = acos(-1.0);

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Given Input is uppercase %c\n",ch);
    else if(ch>='a' && ch<='z')
        printf("Given Input is Lowercase %c\n",ch);
    else if(ch>='0' && ch<='9')
        printf("Given input is a Number %c\n",ch);


    return 0;
}
