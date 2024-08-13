#include <stdio.h>

struct person
{
    char name[20];
    int age;
    char city[20];
};

void main()
{

    FILE *file;

    struct person p[5];
    for (int i = 0; i < 5; i++)
    {

        printf(" --- Person %d --- ", i + 1);
        printf("\nEnter your name: ");
        scanf("%s", &p[i].name);
        printf("Enter your Age: ");
        scanf("%d", &p[i].age);
        printf("Enter your city: ");
        scanf("%s", &p[i].city);
    }
    for (int i = 0; i < 5; i++)
    {

        // char file_name[10] = strcat("file_", i, ".txt");

        // char file_ending[10] = "4";
        // char file_starting[10] = "file_";
        // strcat(file_ending, ".txt");
        // strcat(file_starting, file_ending);

        file = fopen("common-file.txt", "a");

        fprintf(file, "\n --- Person %d --- ", i + 1);
        fprintf(file, "\nName: %s", p[i].name);
        fprintf(file, "\nAge: %d", p[i].age);
        fprintf(file, "\nCity: %s", p[i].city);
    }
}
