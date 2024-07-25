#include <stdio.h>

void main()
{

    // syntax

    // if (condition)
    // {
    // code, it will run only if condition is true
    // }

    // if (num < 40)
    // {
    //     printf("num is GT 40");
    // }

    // syntax

    // if (condition)
    // {
    //     code, it will only run if condition is true
    // }
    // else
    // {
    //     code, it will only run if condition is false
    // }

    int age = 15;

    if (age >= 18)
    {
        printf("You are eligible for DL");
    }
    else
    {
        printf("You are NOT eligible for DL");
    }

    // ternary

    // condition ? statement_1:statement_2

    // age >= 18 ? printf("You are eligible for DL") : printf("You are NOT eligible for DL");

    // syntax

    // if (condition_1)
    // {
    //     code, it will run only if condition 1 is true
    // }
    // else if (condition_2)
    // {
    //     code, it will run only if above all conditions are false and given condition is true
    // }
    // else
    // {
    //     code, it will run if all specified conditions are false
    // }

    if (age >= 50)
    {
        printf("You are eligible for DL but you need to submit your eye test report");
    }
    else if (age >= 18)
    {
        printf("You are eligible for DL");
    }
    else
    {
        printf("You are NOT eligible for DL");
    }
}