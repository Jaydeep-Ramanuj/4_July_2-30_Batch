#include <stdio.h>

void main()
{

    int counter = 1;
    for (int i = 1; i <= 20; i += 2)
    {
        if (i <= 9)
        {
            for (int k = 4; k >= counter; k--)
            {
                printf(" ");
            }
            counter++;

            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int a = 7; a <= counter; a++)
            {
                printf(" ");
            }
            counter++;
            for (int b = 14; b >= i - 5; b--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}