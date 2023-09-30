// C program to swap two numbers. (Using a third variable).

#include<stdio.h>
int main() {
  float first, second, temp;

  printf("Enter first number: ");
  scanf("%f", &first);

  printf("Enter second number: ");
  scanf("%f", &second);

  printf("\nBefore swapping first number = %.2f\n", first);
  printf("Before swapping second number = %.2f", second);

  // Assigning the first number / variable value to the temp ( temporary variable).
  temp = first;
  // Asssigning the second number / variable value to the first number / variable.
  first = second;
  // At last asssigning the first number / variable value stored in the temp to the second number / variable.
  second = temp;

  printf("\nAfter swapping first number = %.2f\n", first);
  printf("After swapping second number = %.2f", second);

  return 0;
}
