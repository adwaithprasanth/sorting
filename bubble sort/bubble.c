#include <stdio.h>

int main()
{
    int n,i,A[25],j,temp;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements (max 25):\n");
    scanf("%d", &n);

    // Prompt the user to enter the elements of the array
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:\n", i+1);
        scanf("%d", &A[i]);
    }

    // Bubble Sort algorithm to sort the array in ascending order
    for(i=0;i< n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j] > A[j+1])
            {
                // Swap the elements
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Sorted array in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}