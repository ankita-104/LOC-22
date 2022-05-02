// WAP to get the largest element of an array using the function.

/*#include <stdio.h>


int findLarge(int a[],int a_size)

{

    int i,Large_num;

    Large_num=a[0];

    for(i=1;i<a_size;i++)

    {

        if(Large_num<a[i])

            Large_num=a[i];

    }

    return Large_num;


}


int main()

{

    int a[100],a_size,L_Num,i;

    printf(“ Enter size of array: ");

    scanf(“ %d ”, &a_size);

    printf(“ Enter the elements into array:\n”);

    for(i=0;i<a_size;i++)

        scanf(“%d”,&a[i]);

    L_Num=findLarge(a,a_size);

    printf(“Largest number is: %d\n”,L_Num);

    return 0;

}*/





// C program to find maximum in arr[] of size n
#include <stdio.h>

int largest(int arr[], int n)
{
	int i;
	

	int max = arr[0];

	
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main()
{
	int arr[],i,n;
    printf("enter the size of array:");
    scanf("%d", &n);

   
    printf("enter the array elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

    
    }
    printf("the array elements are:\n");

    for(i=0; i<n; i++)
    {
        printf(" %d", arr[i]);

    }

	printf("\nThe Largest element in given array is %d", largest(arr, n));
	return 0;
}
