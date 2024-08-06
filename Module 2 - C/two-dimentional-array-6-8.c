#include <stdio.h>

void main()
{
    int numbers[3] = {1, 2, 3};
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int array[3][3][2] = {
        {{0, 0},
         {1, 1},
         {2, 2}},
        {{0, 0},
         {1, 1},
         {2, 2}},
        {{0, 0},
         {1, 8},
         {2, 2}}};

    printf("%d", numbers[2]);
    printf("%d", arr[1][2]);
    printf("%d", array[2][1][1]);
}