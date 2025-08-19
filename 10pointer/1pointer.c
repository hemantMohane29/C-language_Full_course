// pointer 

#include<stdio.h>

int main(){
  int a =4;
  int* ptr = &a;
  
  printf("a = %d\n",a);
  printf("a = %p\n",*ptr);
  
  printf(" a of address  = %p\n",ptr);
//   printf(" a of address  = %p\n",a);
  printf(" a of address  = %p\n",&a);



    return 0;
}