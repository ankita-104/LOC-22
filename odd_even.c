//WAP to check whether a number is even or odd using switch case.


#include<stdio.h>

int main()

{
    int num1, num2, num3;

printf("Enter the number:");
scanf("%d", &num1);


num2=num1%2;

switch(num2==0)
{

case 1:
printf("The number is an even number.\n");
break;


case 0:
printf("The number is an odd number.\n");
break;




}





    return 0;

}