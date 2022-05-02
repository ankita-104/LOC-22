// WAP to check whether a number is even or not using functions.

#include <stdio.h>

int even(int n)
{
    if (n % 2 == 0)
    {
        printf("it is a even number.");
    }
    else
    {
        printf("it is a odd number.");
    }

    return 0;
}

int main()
{
    int n, i;
    printf("enter the number :");
    scanf("%d", &n);
    printf("%d", even(n));

    return 0;
}