// C program to print the multiplication table of the entered number.

#include<stdio.h>

int main(){
    int n, i;

    printf("Enter a number : ");
    scanf("%d", &n);
    
    printf("\tMultiplication table of %d :\n", n);
    printf("\t------------------------\n");
    for(i = 1; i <= 10; i++){
        printf("\t\t%d * %d = %d\n", n, i, n * i);
    }
    printf("\t------------------------");

    return 0;
}