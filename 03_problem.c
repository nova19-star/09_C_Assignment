// 4. Write a C program to display the pyramid using star (*) symbol.
#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
