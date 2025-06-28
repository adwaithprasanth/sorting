#include <stdio.h>

int main()
{
    int n, i, j, key;
    int A[25];

    // Ask the user for the number of elements
    printf("Enter the number of elements (max 25):\n");
    scanf("%d", &n);

    // Validate input size
    if (n < 1 || n > 25) {
        printf("Invalid size. Please enter a number between 1 and 25.\n");
        return 1;
    }

    // Read elements into the array
    for (i = 0; i < n; i++) {
        printf("Enter element %d:\n", i + 1);
        scanf("%d", &A[i]);
    }

    // Insertion Sort logic
    for (i = 1; i < n; i++) {
        key = A[i];
        j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }

        // Place the key in the correct position
        A[j + 1] = key;
    }

    // Display the sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
