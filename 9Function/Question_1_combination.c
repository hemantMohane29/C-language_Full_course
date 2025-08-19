// Combination 


#include<stdio.h>

int factorial(int y){
  int x = 1;
  for(int i=2; i<=y; i++){
     x = x * i ;
  }
  return x;
}
int main(){
    
// factorial();
int a;
printf("Enter the a = ");
scanf("%d",&a);

int b;
printf("Enter the b = ");
scanf("%d",&b);

int ncr = factorial(a)/(factorial(a-b) * factorial(b));
printf("ncr = %d",ncr);
    return 0;
}