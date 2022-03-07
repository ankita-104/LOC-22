//initialise two 2*2 matrices and print their sum and product.

#include<stdio.h>
#include<string.h>
void main()

{
int a[2][2],b,sum, product;

printf("enter 1st element of row 1:\n");
scanf("%d", &a[1][1]);

printf("enter 2nd element of row 1:\n");
scanf("%d", &a[1][2]);

printf("enter 1st element of row 2:\n");
scanf("%d", &a[2][1]);

printf("enter 2nd element of row 2:\n");
scanf("%d", &a[2][2]);

printf("the matrix is:\n");
printf("%d", a);

sum=a[1][1]+a[1][2]+a[2][1]+a[2][2];
printf("sum=%d", sum);
product=a[1][1]*a[1][2]*a[2][1]*a[2][2];
printf("product=%d", product);







}