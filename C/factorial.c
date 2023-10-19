// C program to calculate factorial of a given entered number.

#include<stdio.h>

int main(){
    int n, i, fact = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    if(n == 0 || n == 1){
        printf("Factorial of %d is 1", n);
    }
    else if(n < 0){
        printf("You entered a negative number, enter a positive number");
    }
    else{
        for(i = 1; i <= n; i++){
            fact = fact * i;
        }
    printf("Factorial of %d is %d", n, fact);
    }

    return 0;
}
