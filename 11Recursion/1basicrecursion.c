// Recurion = function calling itself

// Makre a function which calculates the factorial of n using recursion

#include<stdio.h>
int factorial(int n){
   if(n==1 || n==0) return 1;   // base case
  
   int rec_Ans = n*factorial(n-1); 
    return rec_Ans; 
}
int main(){

  int n;
  printf("Enter the n = ");
  scanf("%d",&n);

  int fact = factorial(n);

  printf(" factorial = %d",fact);


    return 0;
}