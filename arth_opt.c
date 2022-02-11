// WAP to enter two numbers and perform all Arithmetic operations using Switch case.

#include <stdio.h>

int main()

{
    float num1, num2, num;
    int a;

    printf("Enter the 1st number:\n");
    scanf("%f", &num1);

    printf("Enter the 2nd number:\n");
    scanf("%f", &num2);

 
    
printf("choose a number to perform the operation\n\n");
    



    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");


    scanf("%d", &a);

    switch (a)

    {

    case 1:
    {
        printf("The sum of %f and %f is:", num1, num2);
        num = num1 + num2;
        printf("num=%f");
        break;
    }

    case 2:
    {
        printf("The difference of %f and %f is:", num1, num2);
        num = num1 - num2;
        printf("num=%f", num);
        break;
    }
    case 3:
    {
        printf("The product of %f and %f is:", num1, num2);
        num = num1 * num2;
        printf("num=%f", num);
        break;
    }
    case 4:
    {
        printf("The dividion result of %f and %f is:", num1, num2);
        num = num1 / num2;
        printf("num=%f");
        break;
    }
   
    }

    return 0;
}