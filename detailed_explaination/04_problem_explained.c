

#include <stdio.h>

int main() {
    int i, j;

    // Loop through rows
    for(i = 1; i <= 5; i++) {
        
        // Loop to print stars in each row
        for(j = 1; j <= i; j++) {
            printf("*");  // Print a star for the current row
        }

        // Move to the next line after printing all stars in the current row
        printf("\n");
    }

    return 0;  // Return 0 to indicate the program executed successfully
}
