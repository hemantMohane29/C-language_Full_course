// Take positive integer input and tell if it is a three number or not.

#include<stdio.h>
int main(){

   int n;
   printf("enter the number = ");
   scanf("%d",&n);

   if (n > 99 && n < 1000){
    printf("this number is three digit number");
   }
   else
  {
    printf("this number is not ");
  }

    return 0;
}