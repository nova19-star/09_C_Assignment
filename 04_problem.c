// 5. Write a C program to print half number pyramid.
#include <stdio.h>
int main () {
    int i, j;
    for(i= 1; i<=  5; i++) {
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n"); }
    return 0;

}

