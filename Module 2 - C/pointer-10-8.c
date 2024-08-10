#include <stdio.h>

void main()
{

    int num = 10;

    // pointer, it is special type of variable that stores address of an object. It is useful when we want to pass reference of that object.

    // pointer declaration

    int *ptr;

    // & address of, it gives address of given object

    ptr = &num;

    // printf("%d", *ptr);
    printf("\nBefore value change");
    printf("\n%d", num);

    // *, value of , it gives value stored at location which pointer is pointing

    *ptr = 30;

    printf("\nAfter value change");
    printf("\n%d", num);
}