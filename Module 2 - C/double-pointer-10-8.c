#include <stdio.h>

void main()
{

    int num = 10;

    int ptr;
    ptr = &num;

    int **pop;
    pop = &ptr;

    // printf("%d", num);

    // printf("--- Addresses ---");

    // printf("\nnum: %p", &num);
    // printf("\nptr: %p", &ptr);
    // printf("\npop: %p", &pop);

    // printf("\n--- Values ---");

    // printf("\nnum: %d", num);
    // printf("\nptr: %p", ptr);
    // printf("\npop: %p", *pop);

    printf("\nAfter value change");
    printf("\n%d", num);
    **pop = 30;
    printf("\nAfter value change");
    printf("\n%d", num);
}