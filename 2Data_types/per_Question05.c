// Calculating simple interest 

#include<stdio.h>

int main(){
   
   float principle ;
   float Rate ;
   int time ;
   double total ;
   printf("Principle = ");
   scanf("%f",&principle);
   printf("Rate = ");
   scanf("%f",&Rate);
   printf("Timee = ");
   scanf("%d",&time);
   
   total = ( principle * Rate * time ) /100;

   printf("Total  = %lf",total);


    return 0;
}