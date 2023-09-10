// C program to calculate difference of two integers.

#include <stdio.h>
int main() {    

    int a, b, sub;
    
    printf("Enter the fist number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    sub = a - b;      
    
    printf("Difference of %d and %d is = %d", a, b, sub);
    return 0;
}
