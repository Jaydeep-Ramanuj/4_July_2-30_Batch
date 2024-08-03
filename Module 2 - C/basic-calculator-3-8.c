#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);
int mod(int, int);

void main()
{
    int choice, num1, num2, isRunning = 1;

    while (isRunning)
    {
        printf("\n");
        printf("\n-------------------");
        printf("\nWelcome...");
        printf("\nChoose your operation from below");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Modulo");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (!(choice >= 6 || choice <= 0))
        {
            printf("\nEnter first number: ");
            scanf("%d", &num1);
            printf("\nEnter first number: ");
            scanf("%d", &num2);
        }

        switch (choice)
        {
        case 1:
            printf("Summation of %d and %d is: %d", num1, num2, sum(num1, num2));
            break;
        case 2:
            printf("Subtraction of %d and %d is: %d", num1, num2, sub(num1, num2));
            break;
        case 3:
            printf("Multiplication of %d and %d is: %d", num1, num2, mul(num1, num2));
            break;
        case 4:
            printf("Division of %d and %d is: %.2f", num1, num2, div(num1, num2));
            break;
        case 5:
            printf("Modulo of %d and %d is: %d", num1, num2, mod(num1, num2));
            break;
        case 6:
            isRunning = 0;
            printf("Thank you.");
            break;
        default:
            printf("Oops. Wrong input.");
            break;
        }
    }
}

int sum(int n1, int n2)
{
    return n1 + n2;
}
int sub(int n1, int n2)
{
    return n1 - n2;
}
int mul(int n1, int n2)
{
    return n1 * n2;
}
float div(int n1, int n2)
{
    return (float)n1 / n2;
}
int mod(int n1, int n2)
{
    return n1 % n2;
}