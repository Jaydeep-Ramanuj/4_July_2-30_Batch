
#include <stdio.h>


void main(){

int num1,num2;
float result;

printf("Enter first number: ");
scanf("%d",&num1);

printf("Enter second number: ");
scanf("%d",&num2);



result=num1 + num2;
printf("\n%d + %d = %d",num1,num2,(int)result);

result=num1 - num2;
printf("\n%d - %d = %d",num1,num2,(int)result);

result=num1 * num2;
printf("\n%d * %d = %d",num1,num2,(int)result);

result=(float)num1 / num2;
printf("\n%d / %d = %f",num1,num2, (float) result);

result=num1 % num2;
printf("\n%d /% %d = %d",num1,num2,(int)result);

}
