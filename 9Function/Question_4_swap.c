// Swap 2 number 

#include<stdio.h>
int main(){

 int a , b , c;
 printf("ente the value a  = ");
 scanf("%d",&a);

 printf("Enter the value b = ");
 scanf("%d",&b);

//   c = a;
//   a = b;
//   b = c;

a = a + b;
b =  a - b;
a = a - b;

  printf("a =  %d\n",a);
  printf("b=  %d",b);

    return 0;
}