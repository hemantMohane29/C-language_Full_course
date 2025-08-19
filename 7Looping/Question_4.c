// Display this ap- 1 3 5 7 9 upto n terms

#include<stdio.h>
int main(){

   int n;
   printf("enter the value of n =  ");
   scanf("%d",&n);

   for(int i=1; i<=2*n-1; i=i+2){
   printf("%d\t",i);
   }

    return 0;
}