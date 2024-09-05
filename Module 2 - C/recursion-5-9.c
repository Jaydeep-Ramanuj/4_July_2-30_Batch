#include <stdio.h>

int getFact(int num)
{
    if (num > 1)
        return num *= getFact(num - 1);
}

void main()
{
    printf("%d", getFact(7));
}