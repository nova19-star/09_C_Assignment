// 1. Write a C program to find the reverse of an array

#include<stdio.h>
int main() {
    int x[10],n,i,j,temp;
    printf("Enter the elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter the number of elements in an array: ");
        scanf("%d", &x[i]);
    }
    printf("The elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",x[i]);
    }
    for(i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
    printf("The new array are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", x[i]);
    }
    return 0;
}
