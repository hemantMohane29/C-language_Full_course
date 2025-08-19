// Any year is input through the keyboard. write a program to determine whether the year is a leap year or not.

#include<stdio.h>

int main(){

  int n;

  printf("Enter the year to find leap year = ");
  scanf("%d",&n);

  if(n%4==0) 
  printf("this is the leap year ");
  
  else 
  printf("this is not a leap year");

    return 0;
}