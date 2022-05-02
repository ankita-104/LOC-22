// WAP to get the largest element of an array using the function.


#include <stdio.h>

int largest(int a[], int n)
{
	int i;
	

	int max = a[0];

	
	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];

	return max;
}

int main()
{
	int a[30],i,n;
    printf("enter the size of array:");
    scanf("%d", &n);

   
    printf("enter the array elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    
    }
    printf("the array elements are:\n");

    for(i=0; i<n; i++)
    {
        printf(" %d", a[i]);

    }

	printf("\nThe Largest element in given array is %d", largest(a, n));
	return 0;
}
