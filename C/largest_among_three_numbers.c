// C program to find largest number among three numbers.

#include<stdio.h>
int main(){
    int num1, num2, num3;
    
    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);
 
    printf("Enter third number : ");
    scanf("%d", &num3);

    if(num1 == num2 && num2 == num3){
        printf("First, second and third all numbers are same, so all numbers are equal");
    }
    else if(num1 > num2 && num1 > num3){
        printf("%d, first number is the largest", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("%d, second number is the is largest", num2);
    }
    else{
        printf("%d, third number is the is largest", num3);
    }
    return 0;
}
