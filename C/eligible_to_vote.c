// C program to check whether the person is eligible for voting or not.

#include<stdio.h>
int main(){
    int age;

    printf("Enter the age of the person : ");
    scanf("%d", &age);

    if(age > 0 && age <= 18){
        printf("The person is not eligible for voting");
    }
    else if(age > 18 && age < 100){
        printf("The person is eligible for voting");
    }
    else{
        printf("Entered age is invalid");
    }    
    return 0;
}
