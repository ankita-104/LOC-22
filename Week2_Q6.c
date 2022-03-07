//Take input N and print a square pattern like below with N *s per side.
/*If N=5, the pattern should look like this

* * * * *
*       *
*       *
*       *
* * * * *


*/

#include<stdio.h>
#include<string.h>

void main()


{
   
    int i, j, n;

    
    printf("Enter number of rows: ");
    scanf("%d", &n);

    
    for(i=1; i<=n; i++)
    {
        
        for(j=1; j<=n; j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        
        printf("\n");
    }


    
}




    
