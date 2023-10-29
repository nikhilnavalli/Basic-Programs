// C program to calculate and print the area of a circle with the given radius.

#include<stdio.h>
#define pi 3.14159265359

int main(){
  float radius, area;

  printf("Enter the radius of circle : ");
  scanf("%f", &radius);

  area = pi * radius * radius;

  printf("The area of a circle with radius %f is = %.2f", radius, area);

  return 0;
}
