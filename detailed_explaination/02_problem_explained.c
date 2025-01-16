
#include <stdio.h>

int main() {
    int x[10], i, j, n, element;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &x[i]);  // Read the elements into the array
    }

    // Ask the user which element they want to delete
    printf("Enter the element to delete: ");
    scanf("%d", &element);  // Read the element to delete

    // Search for the element in the array
    for(i = 0; i < n; i++) {
        if(x[i] == element) {  // If the element is found
            // Shift elements to the left to overwrite the deleted element
            for(j = i; j < n - 1; j++) {
                x[j] = x[j + 1];  // Shift each subsequent element one position to the left
            }
            n--;  // Reduce the size of the array
            break;  // Exit the loop after the element is deleted
        }
    }

    // Display the updated array after deletion
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", x[i]);  // Print the remaining elements
    }
    printf("\n");

    return 0;  // Return 0 to indicate successful execution
}
