// Take positive integer input and tell if ot is divible by 5 and 3 

#include<stdio.h>
int main(){
  int a;
  printf("Enter the number =  ");
  scanf("%d",&a);
     
  if ( a%5 == 0 && a%3 == 0)
   {
    printf("divisible by both ");
   }
  else 
  {
    printf("Not Divisible by both");
  }
    return 0 ;

}