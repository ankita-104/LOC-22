//To find Fibonacci series of N- numbers using loop.
/*0 1 1 2 3 5 8 13...*/


#include<stdio.h>
#include<string.h>
void main()
{

    int i, j;

  
  int t1 = 0, t2 = 1;

  
  int next_term = t1 + t2;


  printf("Enter the number of terms: ");
  scanf("%d", &j);

  
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  
  for (i = 3; i <= j; ++i) {
    printf("%d, ", next_term);
    t1 = t2;
    t2 = next_term;
    next_term = t1 + t2;
  }
    
}






