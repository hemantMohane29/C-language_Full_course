// Take 3 Positive inntegers input and print the greatest of them


#include<stdio.h>
int main(){

   int a, b, c;
   printf("Enter the value of a = ");
   scanf("%d",&a);
   printf("Enter the value of b = ");
   scanf("%d",&b);
   printf("Enter the value of c = ");
   scanf("%d",&c);


 if (a>b && a>c){

     printf("a = %d  is greater then to b anf c ",a);
 }
 if (b>a && b>c){

     printf("b = %d is greater then to a anf c ",b);
 }
 if (c>b && c>a){

     printf("c = %d is greater then to a anf b ",c);
 }
else if( a == b && b == c && a == c ){
    printf("a,b and c is equal");
}
 
    return 0;
}
