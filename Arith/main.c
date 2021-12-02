#include<stdio.h>
#include "arith.h"

int main(int argc, char const *argv[])
{
    int Add_result = 0, Sub_result = 0;
    int num1 = 0,num2 = 0;

    printf("Enter Two numbers: ");
    scanf("%d %d", &num1,&num2);

    Add_result = add(num1,num2);
    Sub_result = sub(num1,num2);

    if(Add_result >= 0)
    {
        printf("Sum of %d and %d is  = %d\n", num1,num2,Add_result);
    }
    else
    {
        printf("Sum becomes negative\n");
    }

    if(Sub_result >= 0)
    {
        printf("Difference of %d and %d is = %d\n", num1,num2,Sub_result);
    }
    else
    {
        printf("Difference becomes negative\n");
    }

    return 0;
}
