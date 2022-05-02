/*WAP to find the GCD of two numbers using recursion*/
#include<stdio.h>

int  gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}

int main() 
{
    int a, b;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d.", a, b, gcd(a, b));
    return 0;
}



