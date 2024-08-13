#include <stdio.h>

void main()
{
    FILE *file;
    char data[200];

    // Modes

    file = fopen("data.txt", "r"); // read only
    // file = fopen("data.txt", "w"); // write only
    // file = fopen("data.txt", "a"); // append only
    // file = fopen("data.txt", "r+"); // read + write
    // file = fopen("data.txt", "w+"); // write + read
    // file = fopen("data.txt", "a+"); // append + read

    // If we want to work with binary, then we can use modes like rb, wb, ab, rb+, wb+, ab+

    // fscanf(file, "%s", data);
    // fscanf(file, data);
    // printf("%s", data);

    // for (int i = 0; i < 5; i++)
    // {
    //     fgets(data, 300, file);
    // printf("%s", data);
    // }

    // fprintf(file, "\nThis is latest text");
    // fputs("This will be added in given file", file);

    fclose(file);
}
