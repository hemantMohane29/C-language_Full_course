// pass bby refference 



#include<stdio.h>


void swap(int* x , int* y){

  int c = *x;
  *x = *y;
  *y = c ;

}
int main(){

 int  a = 2;
 int b = 9;

 swap(&a , &b);

 printf("a = %d\n",a);
 printf(" b = %d",b);


    return 0;
}