// Take positive integer input and tell if ot is divible by 5 or 3 

#include<stdio.h>

int main(){

   int n;
   printf("Enter the number = ");
   scanf("%d",&n);

   if(n%5==0 || n%3==0){
    printf("divisible by ");

   }
   else{
    printf("Not Divisible ");
   }

    return 0;
}
