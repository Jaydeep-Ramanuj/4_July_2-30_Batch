#include <stdio.h>

void printRam(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("\nRam %d", i);
    }
}
void printKrishna(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("\nKrishna %d", i);
    }
}

void main()
{
    printf("\nAfter some lines");

    for (int i = 0; i < 10; i++)
    {
        printRam(10);
        printKrishna(10);
    }
}
