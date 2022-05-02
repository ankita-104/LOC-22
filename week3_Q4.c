// WAP to swap two numbers using functions.

#include <stdio.h>

void swap(int *p, int *q)
{
    int z;

    z = *p;
    *p = *q;
    *q = z;
    
  }

int main()
{
    int a, b;
    printf("enter a and b:\n");
    scanf("%d %d", &a, &b);
    printf("the swapped number is:\n");
     swap(&a, &b);
printf("number after swapping: %d %d" , a, b);

    return 0;
}
