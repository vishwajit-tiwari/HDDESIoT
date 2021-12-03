#include<stdio.h>
#include "arith.h"

int main(int argc, char const *argv[])
{
    //Variables declarion
    int Add_result = 0, Sub_result = 0, Mul_result = 0, Div_result = 0;
    int num1 = 0,num2 = 0;

    //Message on user screen
    printf("Enter Two numbers: ");
    scanf("%d %d", &num1,&num2);

    //Function Call
    Add_result = add(num1,num2);
    Sub_result = sub(num1,num2);
    Mul_result = mul(num1,num2);
    Div_result = div(num1,num2);

    //Printing Result on Console
    printf("Sum = %d\n",Add_result);
    printf("Difference = %d\n",Sub_result);
    printf("Product = %d\n", Mul_result);
    printf("Division = %d\n", Div_result);

    return 0;
}
