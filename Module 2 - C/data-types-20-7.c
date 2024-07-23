#include <stdio.h>


void main(){

// Data type ,it specifies the type of data. When used with variable,
// it shows that what type of data variable will store


// Primary Data type
// 1. void
// 2. int => 2 or 4 byte, numbers without decimal, %d
// 3. float => 4 byte, numbers with decimal, %f
// 4. double => 8 to 10 byte, numbers with decimal, %lf
// 5. char => 1 byte, alphanumaric value wrapped in '', stores single character



int num=10; // Ex. 10,30,76515,5412
printf("num: %d",num);

float num2=10.1;
printf("\nnum: %f",num2);
printf("\nnum: %.2f",num2);
printf("\nnum: %.8f",num2);

double num3=354321;
printf("\nnum: %.3lf",num3);


char c='a';
printf("\nc: %c",c);
c='abc';
printf("\nc: %c",c);


printf("\nsize of int: %d",sizeof(int));
printf("\nsize of float: %d",sizeof(float));
printf("\nsize of double: %d",sizeof(double));
printf("\nsize of char: %d",sizeof(char));

printf("\nsize of void: %d",sizeof(void));


// Type conversion, its process where one type of data
// converted in another type of data

// 1. Implicit, done by compiler automatically
// 2. explicit, done by user, ex. (float)


int number=10;
int number1=10.30;

printf("\nNumber: %f", (float) number);
printf("\nNumber: %d", (int) number);


}
