// C program to calculate factorial of a given entered number.

#include<stdio.h>

int main(){
    int n, i, fact = 1;

    printf("Enter the number whose factorial you want : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("Factorial of %d is %d", n, fact);
}