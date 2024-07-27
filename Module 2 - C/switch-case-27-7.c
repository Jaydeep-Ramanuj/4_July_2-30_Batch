#include <stdio.h>

void main()
{

    int dayNum = 1;

    // if (dayNum == 1)
    // {
    //     printf("Sunday");
    // }
    // else if (dayNum == 2)
    // {
    //     printf("Monday");
    // }
    // else if (dayNum == 3)
    // {
    //     printf("Tuesday");
    // }
    // else if (dayNum == 4)
    // {
    //     printf("Wednesday");
    // }
    // else if (dayNum == 5)
    // {
    //     printf("Thursday");
    // }
    // else if (dayNum == 6)
    // {
    //     printf("Friday");
    // }
    // else if (dayNum == 7)
    // {
    //     printf("Saturday");
    // }
    // else
    // {
    //     printf("Wrong input");
    // }

    // switch(key){
    //     case key_value_1:
    //         code
    //         break;
    //     case key_value_2:
    //         code
    //         break;
    //     case key_value_3:
    //         code
    //         break;
    //         default:
    //         code
    // }

    switch (dayNum)
    {
    case 0:
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Wrong Input");
        break;
    }
}