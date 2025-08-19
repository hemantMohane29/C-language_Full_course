
// WAP to print th sum of given number and its reverse

#include<stdio.h>
int main()
{
   int n , r=0;
   printf("enter the value of n = ");
  scanf("%d",&n);
   
   int value = n , sum;
   while(n!=0){
    
  
    r = r * 10;
     r = r + (n%10);
     n= n / 10;
     sum = value + r ;
   
    }
   
  printf("sum = %d", sum);
    return 0;
}