#include <stdio.h>

// Function to merge two subarrays
void merge(int A[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays
    int L[25], R[25];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = A[left + i];
    for (j = 0; j < n2; j++)
        R[j] = A[mid + 1 + j];

    // Merge the temp arrays back into A[left..right]
    i = 0; j = 0; k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            A[k++] = L[i++];
        else
            A[k++] = R[j++];
    }

    // Copy remaining elements of L[], if any
    while (i < n1)
        A[k++] = L[i++];

    // Copy remaining elements of R[], if any
    while (j < n2)
        A[k++] = R[j++];
}

// Recursive merge sort function
void mergeSort(int A[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(A, left, mid);
        mergeSort(A, mid + 1, right);

        // Merge the sorted halves
        merge(A, left, mid, right);
    }
}

int main()
{
    int n, i, A[25];

    // Read number of elements
    printf("Enter the number of elements (max 25):\n");
    scanf("%d", &n);

    // Validate input size
    if (n < 1 || n > 25)
    {
        printf("Invalid size. Please enter a number between 1 and 25.\n");
        return 1;
    }

    // Read elements into the array
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:\n", i + 1);
        scanf("%d", &A[i]);
    }

    // Perform merge sort
    mergeSort(A, 0, n - 1);

    // Display sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
