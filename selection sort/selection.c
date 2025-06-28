#include <stdio.h>

int main()
{
    int n,i,j,minIndex,temp;
    int A[25];

    // Ask the user for number of elements
    printf("Enter the number of elements (max 25):\n");
    scanf("%d", &n);

    // Read elements into the array
    for (i=0;i<n;i++) {
        printf("Enter element %d:\n", i+1);
        scanf("%d", &A[i]);
    }

    // Selection Sort logic
    for (i=0;i<n-1;i++) {
        minIndex = i;

        // Find the index of the smallest element in the remaining array
        for (j=i+1;j<n;j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum with the current element
        if (minIndex != i) {
            temp = A[i];
            A[i] = A[minIndex];
            A[minIndex] = temp;
        }
    }

    // Display the sorted array
    printf("Sorted array in ascending order:\n");
    for (i=0;i<n;i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
