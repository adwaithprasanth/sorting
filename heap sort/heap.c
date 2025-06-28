#include <stdio.h>

// Function to heapify a subtree rooted at index i
void heapify(int A[], int n, int i)
{
    int largest = i;        // Initialize largest as root
    int left = 2 * i + 1;   // Left child index
    int right = 2 * i + 2;  // Right child index

    // If left child is larger than root
    if (left < n && A[left] > A[largest])
        largest = left;

    // If right child is larger than current largest
    if (right < n && A[right] > A[largest])
        largest = right;

    // If largest is not root
    if (largest != i)
    {
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;

        // Recursively heapify the affected sub-tree
        heapify(A, n, largest);
    }
}

// Heap Sort function
void heapSort(int A[], int n)
{
    // Build max heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(A, n, i);

    // One by one extract elements from heap
    for (int i = n - 1; i > 0; i--)
    {
        // Move current root to end
        int temp = A[0];
        A[0] = A[i];
        A[i] = temp;

        // Call heapify on the reduced heap
        heapify(A, i, 0);
    }
}

int main()
{
    int n, i, A[25];

    // Read number of elements
    printf("Enter the number of elements (max 25):\n");
    scanf("%d", &n);

    // Validate input
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

    // Perform heap sort
    heapSort(A, n);

    // Display sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
