// Given the length and breadth of a rectangle write a program to find whether the area of the rectangle is greater then its premieter.
#include<stdio.h>

int main(){

 float l , b , operation_area , operation_perimeter;

 printf("Enter the length of rectangle = ");
 scanf("%f",&l);

 printf("Enter the breadth of a rectangle = ");
 scanf("%f",&b);

 operation_area = l*b;
 operation_perimeter = 2*(l + b); 

 printf("area of rectangle = %f\n",operation_area );
 printf("perimeter of rectangle = %f",operation_perimeter );
 
return 0;

}