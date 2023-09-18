// C program to check whether the person is eligible for voting or not.

#include<stdio.h>
int main(){
    int age;

    printf("Enter the age of the person");
    scanf("%d", &age);

    if(age <=18){
        printf("The person is not eligible for voting");
    }
    else{
        printf("The person is eligible for voting");
    }

    return 0;
}