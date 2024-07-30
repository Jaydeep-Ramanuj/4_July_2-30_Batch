#include <stdio.h>

void main()
{

    // *
    // **
    // ***
    // ****
    // *****

    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}