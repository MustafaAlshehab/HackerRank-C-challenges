#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[256];
    char sen[256];

    scanf("%c", &ch);
    //%*c here to ignore the new line \n for the third statement to work properly 
    scanf("%s%*c", s);
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n%s\n%s\n",ch, s, sen);
    
     return 0;
}