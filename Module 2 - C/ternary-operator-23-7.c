#include <stdio.h>

void main(){

int num1=100;
int num2=20;

int condition=num1<num2;


// syntax

// condition? expression 1 (it will only if condition is true): expression 2 ((it will only if condition is false));

condition?printf("Num1 is lesser"):printf("Num1 is bigger");

int num=1;
char size=num>2?'G':'L';

printf("\nsize: %c",size);


}
