// Write a function to calculate the nth fibonacci number using recursion 

#include<stdio.h>

int fabonacci(int n){
if (n==1 || n==2 ) return 1;
 
//   return fabonacci(n-2)+fabonacci(n-1);
  int ans1 = fabonacci(n-1);
  int ans2 = fabonacci(n-2);
  int ans =  ans1 +  ans2 ;
  return ans;

}
int main(){

  int n;
  printf("Enter the base n = ");
  scanf("%d",&n);

  int fibo  = fabonacci(n);

  printf(" fabonacci number  = %d",fibo);


    return 0;
}