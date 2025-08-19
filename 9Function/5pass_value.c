// pass by value and pass by refernce 




//pass by value 
#include<stdio.h>

void swap(int a, int b){
  int c = a;
   a = b ;
   b = c ;
   return ;
}

int main(){
  int a , b;
  printf("Enter the value a  =");
  scanf("%d",&a);

  printf("Enter the value b = ");
  scanf("%d",&b);

  swap(a,b);    // formal parameter or a,b ki value actual parameter

  printf(" a = %d\n",a);
  printf("b = %d",b);

    return 0;
}