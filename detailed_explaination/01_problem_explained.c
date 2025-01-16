// 1. write a C program to insert an element in an Array and display it.

#include <stdio.h>

int main() {
    int x[100], n, element, position, i;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", & x[i]);  // Read each element and store it in the array
    }

    // Ask for the element to be inserted and the position to insert it at
    printf("Enter the element to insert: ");
    scanf("%d", &element);  // Read the element to insert
    printf("Enter the position to insert the element (1 to %d): ", n + 1);
    scanf("%d", &position);  // Read the position where the element should be inserted

    // Check if the position is valid
    if(position > n + 1 || position < 1) {
        printf("Invalid position!\n");  // If the position is outside the valid range
    } else {
        // Shift elements to the right to make space for the new element
        for(i = n; i >= position; i--) {
            arr[i] = arr[i - 1];  // Shift each element to the next position
        }

        // Insert the new element at the specified position
        x[position - 1] = element;

        // Increase the size of the array
        n++;

        // Display the updated array
        printf("The array after insertion is:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", x[i]);  // Print each element in the updated array
        }
        printf("\n");
    }

    return 0;  // Return 0 to indicate successful execution
}
