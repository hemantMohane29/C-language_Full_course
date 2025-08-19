// Remaider in c 

#include<stdio.h>
 
int main(){

  int a,b;
  
  printf("enter the number  a :");
  scanf("%d",&a);
  printf("enter the number  b :");
  scanf("%d",&b);

    int q = a /b;
    int r = a - b * q; // Divisor * Quotient + Remainder = Dividend 
    printf("remainder = %d",a%b);
    printf("The Remainder When  %d is divided by %d is :  %d",a,b,r);
   
    return 0;
  }
