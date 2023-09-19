// C program to calculate product of two integers.

#include <stdio.h>
int main() {    

    int m, n, product;
    
    printf("Enter the fist number : ");
    scanf("%d", &m);

    printf("Enter the second number : ");
    scanf("%d", &n);

    product = m * n;      
    
    printf("Product of %d and %d is = %d", m, n, product);
    return 0;
}
