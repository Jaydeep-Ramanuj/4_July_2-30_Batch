#include <stdio.h>

void main(){

int num1=155;
int num2=30;


int condition1=num1<num2;
int condition2=num1<5;



// Logical operator


//AND (&&), gives true if all are true

//Truth table for AND
//
//T | T => T
//T | F => F
//F | T => F
//F | F => F

printf("condition1: %d", condition1);
printf("\ncondition2: %d", condition2);
printf("\ncondition1 && condition2 : %d", condition1&& condition2);

//OR (||), gives true if any one is true

//Truth table for OR
//
//T | T => T
//T | F => T
//F | T => T
//F | F => F

printf("\ncondition1 || condition2 : %d", condition1|| condition2);


//NOT (!), gives true if false, gives false if true

printf("\n!condition1: %d",!condition1);
}
