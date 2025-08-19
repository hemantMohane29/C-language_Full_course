// int to pointer address add address to pointe  (int** -> double pointer)
 

#include<stdio.h>
int main(){

  int a = 4;
  int* b = &a;  // int* -> int ka address store kar rah hai

int** y = &b;  // int** -> int* ka address store kar rah hai 

printf("%d\n ",a); // a ki value print kar raha hai 
printf("%d\n ",*b); // a ki value print kar raha hai 
printf("%d\n ",**y); // a ki value print kar rha hai
printf(" a = %p\n ", &a);
printf(" b = %p\n",&b);

    return 0;
}