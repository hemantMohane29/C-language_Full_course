// nested if control statement 

#include<stdio.h>

int main(){

  int a;
  printf("Enter the value of a = "); 
  scanf("%d",&a);

  if(a%5==0){
     if(a%3==0){
        printf("divisible by ");
     }
     else {
        printf("Not divisible ");
      }
  }
  else {
    printf("Not divisible ");
  }
    

    return 0;
}