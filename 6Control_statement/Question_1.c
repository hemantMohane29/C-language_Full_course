// take positive integer input and tell if it is even or odd

#include<stdio.h>

int main(){

   int a;
   printf(" enter the number a = ");
   scanf("%d",&a);

   if(a%2==0)
    printf("even number ");
   
    // if(a%2!=0)
    else
    printf("odd number");


    return 0;
}