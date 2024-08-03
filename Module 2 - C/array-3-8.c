#include <stdio.h>

void main()
{

    // array, it is collection similar type of items, its index starts from 0.

    // array declaration
    // array_type array_name[array_size];

    int number[5];

    // array defintion
    int num[] = {10, 20, 30, 40, 50};

    // array value access

    printf("%d", num[0]);

    printf("\nBefore value update");
    printf("\n%d", num[3]);

    // array value update
    num[3] = 400;

    printf("\nAfter value update");
    printf("\n%d", num[3]);
}