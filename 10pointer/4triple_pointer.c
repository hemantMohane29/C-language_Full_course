// triple pointer 


#include<stdio.h>

int main(){

 int a = 25;
 int* b = &a;
 int** c = &b;
 int*** d = &c;


 // print the value 
 printf("a = %d \n",a);
printf("a = %d \n",*b);
 printf("a = %d \n",**c);
 printf("a = %d \n",***d);


 // given address to pointer  variab;e 
 printf("addres of a = %p \n",&a);
 printf("addres of a = %p \n",&b);
 printf("addres of a = %p \n",&c);



    return 0;
}
