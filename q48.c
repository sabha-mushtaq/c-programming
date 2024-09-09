// Sort an integer array using Bubble Sort.
#include<stdio.h>

int main() {
    int temp, n;

    // Input the number of elements
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Use %d for integers
    }

    // Bubble Sort logic
    for (int i = 0; i < n-1; i++) {  // Outer loop
        for (int j = 0; j < n-i-1; j++) {  // Inner loop
            if (arr[j] > arr[j+1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Output the sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
