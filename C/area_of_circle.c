// C program to calculate and print the area of a circle with the given radius.

#include<stdio.h>
#define pi 3.14159265359

int main(){
  float r, area;

  printf("Enter the radius of circle : ");
  scanf("%f", &r);

  area = pi * r * r;

  printf("The area of circle = %.2f", area);

  return 0;
}
