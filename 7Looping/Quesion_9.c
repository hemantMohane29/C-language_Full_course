// Diplay this Gp 100 50 25 upto n terms

#include<stdio.h>
int main(){

 float n;
 printf("Enter the number = ");
 scanf("%f",&n);

 float a = 100;
 for( int i=1; i<=n; i++){
 printf("%f\t",a);
  a = a / 2;

 }

    return 0;
}