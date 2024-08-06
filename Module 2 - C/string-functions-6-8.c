#include <stdio.h>
#include <string.h>
void main()
{

    char str1[10] = "hElLo";
    char str2[10] = "world";

    printf("\nLength of string is: %d", strlen(str1));
    printf("\nLowecase string is: %s", strlwr(str1));
    printf("\nUppercase string is: %s", strupr(str1));
    printf("\nConcatenated string is: %s", strcat(str1, str2));
    printf("\nReversed string is: %s", strrev(str1));
}