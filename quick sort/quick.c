#include <stdio.h>

// Function to swap two values
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function using Lomuto partition scheme
int partition(int A[], int low, int high)
{
    int pivot = A[high];  // Choosing the last element as pivot
    int i = low - 1;      // Index of smaller element

    for (int j = low; j < high; j++)
    {
        if (A[j] < pivot)
        {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[high]);
    return (i + 1);
}

// Quick Sort function (recursive)
void quickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(A, low, high); // Partition index
        quickSort(A, low, pi - 1);        // Sort left sub-array
        quickSort(A, pi + 1, high);       // Sort right sub-array
    }
}

int main()
{
    int n, i;
    int A[25];

    // Input size
    printf("Enter the number of elements (max 25):\n");
    scanf("%d", &n);

    // Validate input range
    if (n < 1 || n > 25)
    {
        printf("Invalid size. Please enter a number between 1 and 25.\n");
        return 1;
    }

    // Input array elements
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:\n", i + 1);
        scanf("%d", &A[i]);
    }

    // Call Quick Sort
    quickSort(A, 0, n - 1);

    // Output sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
