// C program to calculate sum of two integers and print the result.

#include<stdio.h>
int main() {    
    int number1, number2, sum;
    
    printf("Enter the first number : ");
    scanf("%d", &number1);

    printf("Enter the second number : ");
    scanf("%d", &number2);

    sum = number1 + number2;      
    
    printf("Sum of %d and %d is = %d", number1, number2, sum);
    return 0;
}
