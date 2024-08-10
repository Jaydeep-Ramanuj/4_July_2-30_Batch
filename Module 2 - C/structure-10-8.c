#include <stdio.h>

// struct, it is User Defined Data type, which is used when we want to store related data as s a single entity

// struct declaration
struct person
{
    // Member of structure, which will store data
    char name[20];
    int age;
    char city[20];
};

void main()
{

    // instance of struture, it will acts as single entity and store data we declared

    // struct person p;

    // printf("Enter your name: ");
    // scanf("%s", &p.name);
    // printf("Enter your Age: ");
    // scanf("%d", &p.age);
    // printf("Enter your city: ");
    // scanf("%s", &p.city);

    // printf("\nName: %s", p.name);
    // printf("\nAge: %d", p.age);
    // printf("\nCity: %s", p.city);

    //  For multiple users

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
        printf(" --- Person %d --- ", i + 1);
        printf("\nName: %s", p[i].name);
        printf("\nAge: %d", p[i].age);
        printf("\nCity: %s", p[i].city);
    }
}