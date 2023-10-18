// C program to calculate and print the sum of first n natural numbers.

#include<stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);
    return 0;
}