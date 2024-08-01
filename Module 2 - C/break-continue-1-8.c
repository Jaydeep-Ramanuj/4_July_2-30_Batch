#include <stdio.h>

void main()
{

    // break, it is used when you want to break a loop, program will resume after current loop

    // for (int i = 0; i < 50; i++)
    // {
    //     if (i > 25)
    //     {
    //         break;
    //     }
    //     printf("\n%d", i);
    // }

    // continue, it is used when you skip current iteration of the loop, program will resume after current iteration
    for (int i = 0; i < 50; i++)
    {
        if (i > 20 && i < 30)
        {
            continue;
        }
        printf("\n%d", i);
    }

    printf("This line will be printed after loop");
}
