// Take 3 positive integers input and print the greatest of them.

#include<stdio.h>
int main(){

  int a,b,c;

  printf("Enter the value of a = ");
  scanf("%d",&a);
  printf("Enter the value of b = ");
  scanf("%d",&b);
  printf("Enter the value of c = ");
  scanf("%d",&c);
   

  if(a>b){
     if(a>c){
        printf("A is greater than");
     }
  }
  
  if(b>a){
     if(b>c){
        printf("B is greater than");
     }
  }
  
  if(c>b){
     if(c>a){
        printf("C is greater than");
     }
  }
  
  else if (a == b && b == c && c == a ){
    printf("a,b,c is equal ");
  }

    return 0;
}