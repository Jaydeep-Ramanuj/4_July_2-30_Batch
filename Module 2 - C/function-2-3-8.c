#include <stdio.h>

// function declamation

// return_type function_name(paramater_1_data_type, paramater_2_data_type, ..);

int sum(int, int);

void main()
{
    // function call

    // function(argument_1,argument_2,...);

    int result = sum(10, 20);
    printf("Answer is %d", result);
}
// syntax

// function definition

// return_type function_name(parameter_1, parameter_2,..){
//     code
// }

int sum(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}
