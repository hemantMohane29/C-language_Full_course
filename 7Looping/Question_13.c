
// WAP o print reverse of a given number


#include<stdio.h>
int main()
{
   int n , r=0;
   printf("enter the value of n = ");
  scanf("%d",&n);

   while(n!=0){
      
      n = n*10;
      r = r + (n%10);  // r=0 + 12345/10 = 5 = 0+5 = 5
      n = n /10;
  
   }
 printf("reverse num = %d", r);
    return 0;

}