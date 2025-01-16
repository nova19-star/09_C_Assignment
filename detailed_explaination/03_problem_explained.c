// 4. Write a C program to display the pyramid using star (*) symbol.

#include <stdio.h>

int main() {
    int i, j, n;

    // Ask the user to enter the number of rows for the pyramid
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    // Loop to print each row of the pyramid
    for(i = 1; i <= n; i++) {
        // Loop to print spaces before the numbers in each row
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Loop to print numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d ", j);  // Print the numbers from 1 to i
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
