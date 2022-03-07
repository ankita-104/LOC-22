#include<stdio.h>
#include<string.h>
int main()
{
char a[200],b[100],c[200],d[400];
int i,j=0,k;

printf("Enter 1st name:\n");
scanf("%s", a);


printf("enter your last name:\n");
scanf("%s", b);


printf("The name is:\n");

printf("%s\n", strcat(a ,b));

k=strlen(strcat(a,b));


for(i=k-1; i>= 0; i--)
{
d[j++] = strcat(a,b)[i];

}


printf("The reversed name is=%s\n",d);

return 0;
}
