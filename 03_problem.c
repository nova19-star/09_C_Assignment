// 3. Write a C program to using Array to delete an element.

#include <stdio.h>

int main() {
    int x[10], i, j, n, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", & x[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &element);

    for(i = 0; i < n; i++) {
        if(x[i] == element) {
            for(j = i; j < n - 1; j++) {
                x[j] = x[j + 1];
            }
            n--; // Reduce the size of the array
            break;
        }
    }

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}
