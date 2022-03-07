//Take 10 integer inputs and find the sum of odd numbers and even numbers



#include<stdio.h>
#include<string.h>
int main()
{
 
int a[20], rem,i,j,k, int1[11],int2,int3, int4, int5, int6, int7, int8, int9, int10,sum=0, sum2 ;

for(i=0;i<=10;i++)
{
printf("enter number:\n");
scanf("%d", &int1[i]);
rem=int1[i]%2;
if(rem==0)
{
    printf("The sum of even numbers is:\n");
    sum+=int1[i];
    printf("%d",&sum);
}

else{

    printf("The sum of odd numbers is:\n");

    sum+=int1[i];
printf("%d",&sum);

}

}


return 0;

}