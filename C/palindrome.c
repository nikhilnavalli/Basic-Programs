// C program to check whether the entered number is a palindrome or not.

#include <stdio.h>
int main() {
  int n, reverse = 0, remainder, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
  
    return 0;
}
