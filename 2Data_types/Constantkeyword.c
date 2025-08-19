// constant keyword

#include<stdio.h>

int main(){

int a= 14;   // <-- show the error because me use const keyword 
printf("a = %d",a);
const a= 15;
printf("a = %d",a);
a=16;
printf("a= %d",a);


return 0;

}


// // constant ny preprocesss

// #include<stdio.h>
// #define pi 3.14

// int main(){

// printf("pi = %f",pi);

//   return 0;
// }