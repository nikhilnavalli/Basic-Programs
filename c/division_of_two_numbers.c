// C program to calculate division of two numbers.

#include <stdio.h>
int main() {    

    int number1, number2, div;
    
    printf("Enter first number : ");
    scanf("%d", &number1);

    printf("Enter second number : ");
    scanf("%d", &number2);

    div = number1 / number2;      
    
    printf("Division of %d and %d is = %d", number1, number2, div);
    return 0;
}
