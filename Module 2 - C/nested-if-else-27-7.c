#include <stdio.h>

void main()
{

    // if age < 8, then half ticket
    // if age<=3, then free ticket
    // if age> 8, full ticket
    // if age> 8 and status='D' then ticket - 25
    // if age> 8 and status='F' then ticket - 10
    // if age> 8 and status='M' then ticket + 100

    int age = 10, ticketPrice = 100;
    char status = 'M';

    // if (age < 8)
    // {
    //     printf("Half ticket: %d", (int)ticketPrice / 2);
    // }
    // else if (age <= 3)
    // {
    //     printf("Free ticket: 0");
    // }
    // else if (status == 'D' && age > 8)
    // {
    //     printf("Full ticket: %d", ticketPrice - 25);
    // }
    // else if (status == 'F' && age > 8)
    // {
    //     printf("Full ticket: %d", ticketPrice - 10);
    // }
    // else if (status == 'M' && age > 8)
    // {
    //     printf("Full ticket: %d (Fukat mat khana)", ticketPrice + 100);
    // }
    // else
    // {
    //     printf("Full ticket: 100");
    // }

    // Nested if-else

    if (age < 8)
    {
        if (age <= 3)
        {
            printf("Free ticket: 0");
        }
        else
        {
            printf("Half ticket: %d", (int)ticketPrice / 2);
        }
    }
    else
    {
        if (status == 'F')
        {
            printf("Full ticket: %d", ticketPrice - 10);
        }
        else if (status == 'D')
        {
            printf("Full ticket: %d", ticketPrice - 25);
        }
        else if (status == 'M')
        {
            printf("Full ticket: %d (Fukat mat khana)", ticketPrice + 100);
        }
        else
        {
            printf("Full ticket: 100");
        }
    }
}