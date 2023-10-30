// C program to calculate and print the circumference of a circle with the given radius.

#include<stdio.h>
#define pi 3.14159265359

int main(){
  float radius, circumference;

  printf("Enter the radius of circle : ");
  scanf("%f", &radius);

  circumference = 2 * pi * radius;

  printf("The circumference of circle with radius %f is = %.2f", radius, circumference);

  return 0;
}
