// <-- write the program to print table by using while loop

#include<stdio.h>

int main(){

  int a,n=1;
   printf("enter the number = ");
   scanf("%d",&a);

   while(n<=10)
   {
   printf("%d*%d=%d\n",a,n,a*n);
    n++;
    } 
 return 0;
}