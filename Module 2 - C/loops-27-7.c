#include <stdio.h>

void main()
{

    // for(initialization;condition;increment/decrement){
    //     code
    // }

    // for (int counter = 1; counter <= 208; counter++)
    // {
    //     printf("\nJay Shree Ram %d", counter);
    //     printf("\nJay Shree Krishna %d", counter);
    //     printf("\nHar Har Mahadev %d", counter);
    // }

    // for (int counter = 108; counter > 0; counter--)
    // {
    //     printf("\nJay Shree Ram %d", counter);
    //     printf("\nJay Shree Krishna %d", counter);
    //     printf("\nHar Har Mahadev %d", counter);
    // }

    // int result = 0, oldResult;

    // for (int i = 1; i <= 100; i++)
    // {
    //     oldResult = result;
    //     // result = result + i;
    //     result += +i;
    //     printf("\n%d + %d = %d", oldResult, i, result);
    // }

    // initialization
    //     while (condition)
    //     {
    //         code
    //         increment/decrement
    //     }

    int counter = 1;
    int isLive = 1;
    // while (counter <= 108)
    // {
    //     printf("\nJay Shree Ram %d", counter);
    //     printf("\nJay Shree Krishna %d", counter);
    //     printf("\nHar Har Mahadev %d", counter);
    //     counter++;
    // }

    // while (isLive)
    // {
    //     printf("Server is listening...");
    //     printf("\nDo you want to quit: Press 0 for exit: ");
    //     scanf("%d", &isLive);

    //     if (isLive == 0)
    //     {
    //         printf("Server shutting down.");
    //     }
    // }

    int i = 111, result = 0;
    do
    {
        result += i;
        i++;
    } while (i <= 100);

    printf("%d", result);
}