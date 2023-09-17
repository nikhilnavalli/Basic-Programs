// C program to calculate division of two numbers.

#include <stdio.h>
int main() {    

    int a, b, div;
    
    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    div = a / b;      
    
    printf("Division of %d and %d is = %d", a, b, div);
    return 0;
}
