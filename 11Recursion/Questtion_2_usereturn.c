// Print sum from 1 to n (return type)

 // Recurion = function calling itself

#include<stdio.h>
int sum(int n){
   if(n==1 || n==0) return 1;   // base case
  
   int Ans = n + sum(n-1); 
    return Ans; 
}
int main(){

  int n;
  printf("Enter the n = ");
  scanf("%d",&n);

  int fact = sum(n);

  printf(" sum = %d",fact);


    return 0;
}