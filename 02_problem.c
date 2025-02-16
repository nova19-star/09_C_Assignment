// 2. write a C program to insert an element in an Array and display it.

#include <stdio.h>

int main() {
    int arr[100], n, element, position, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert the element (1 to %d): ", n + 1);
    scanf("%d", &position);

    if(position > n + 1 || position < 1) {
        printf("Invalid position!\n");
    } else {
        for(i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = element;
        n++;

        printf("The array after insertion is:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
