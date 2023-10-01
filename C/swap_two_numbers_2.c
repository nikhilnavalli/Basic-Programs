// C program to swap two numbers. (Without suing a third variable).

#include<stdio.h>
int main() {
  float a, b;

  printf("Enter first number: ");
  scanf("%f", &a);

  printf("Enter second number: ");
  scanf("%f", &b);

  printf("\nBefore swapping, first number = %.2f\n", a);
  printf("Before swapping, second number = %.2f", b);
  
  b = a + b;
  a = b - a;
  b = b - a;

  printf("\nAfter swapping, first number = %.2f\n", a);
  printf("After swapping, second number = %.2f", b);

  return 0;
}