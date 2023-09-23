// C program to find largest number among three numbers.

#include<stdio.h>
int main(){
    int a, b, c;
    
    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);
 
    printf("Enter third number : ");
    scanf("%d", &c);

    if(a == b && b == c){
        printf("All numbers are equal");
    }
    else if(a > b && a > c){
        printf("%d, first number is the largest", a);
    }
    else if(b > a && b > c){
        printf("%d, second number is the is largest", b);
    }
    else{
        printf("%d, third number is the is largest", c);
    }
    return 0;
}
