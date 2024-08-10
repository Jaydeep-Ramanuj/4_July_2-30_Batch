#include <stdio.h>

int sum(int*, int*);

void main()
{
    int num1 = 10;
    int num2 = 20;

    printf("Sum: %d", sum(&num1, &num2));
}

int sum(int *n1, int *n2)
{
    return *n1 + *n2;
}