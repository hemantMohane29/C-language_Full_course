// Recurion = function calling itself

#include<stdio.h>
int sum(int n){
   if(n==1 || n==0) return 1;   // base case
  
   int rec_Ans = n+sum(n-1); 
    return rec_Ans; 
}
int main(){

  int n;
  printf("Enter the n = ");
  scanf("%d",&n);

  int fact = sum(n);

  printf(" sum = %d",fact);


    return 0;
}