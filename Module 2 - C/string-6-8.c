#include <stdio.h>

void main()
{
    // char name[10] = "something";
    char name[10] = "something";
    // printf("%c", name[4]);
    // printf("%s", name);

    // printf("Enter your name: ");
    // scanf("%s", &name);
    // gets(name);
    // printf("%s", name);
    // puts(name);

    char names[5][30];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter %d name:", i);
        gets(names[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d: %s", i, names[i]);
    }
}