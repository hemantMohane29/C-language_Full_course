// Data type in c language 
// int 
// char 
// float 
// double
// long 

// 1 byte = 8 bite

// variable Score
/* 1. Global scope 
2. Local Scope  */

#include<stdio.h>
  int a = 12;  //Global Scope
int main(){

int a = 10;  // Local scope
char b = 'h';
float c = 102.21;
double d = 10245.25874;

printf("%d",a);
printf("\n%c",b);
printf("\n%f",c);
printf("\n%lf",d);

int x = 5 , y = 6;
printf("\n  sum = %d",x+y);
printf("\nminus = %d",x-y);
printf("\ndivided = %d",x/y);
printf(" \nmultiple = %d",x*y);


return 0;

}