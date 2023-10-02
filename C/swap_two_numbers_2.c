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

  // Add a and b values and assign it to b. The new b will become sum of a and b.
  b = a + b;
  // Now subtract a value from new b value and assign it to a. The new a will become difference of new b and a.
  a = b - a;
  // At last subtract new a from new and assign it to b.
  b = b - a;

  printf("\nAfter swapping, first number = %.2f\n", a);
  printf("After swapping, second number = %.2f", b);

  return 0;
}

// For better understanding assume a = 10 and b = 20 or any other values of your choice and follow the 17th , 19th and 21st lines of code.
