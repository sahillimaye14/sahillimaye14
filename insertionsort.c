#include <stdio.h>

int main()
{
    int a[100],number,i,j,temp;

    printf("\n Enter the total no. of elements:");
    scanf("%d", &number);

    printf("\n Enter the array elements");
    for (i = 0; i < number; i++)
       scanf("%d", &a[i]);

    for (i = 1; i <= number-1; i++)
    {
        for ( j = i; j > 0 && a[j-1]>a[j]; j--)
        {
         temp = A[i];
         A[i] = A[indexofMin];
         A[indexofMin] = temp;
        }
        
    }
    printf("\n Insertion sort:");
    for ( i = 0; i < number; i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\n");
    return 0;
}
