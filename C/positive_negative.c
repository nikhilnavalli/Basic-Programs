// C program to check whether a number is positive or negative or zero.

#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0) {
        if (num == 0)
            printf("The number is equals to 0");
        else
            printf("You entered %d and it is a negative number", num);
    } 
    else
        printf("You entered %d and it is a positive number", num);

    return 0;
}