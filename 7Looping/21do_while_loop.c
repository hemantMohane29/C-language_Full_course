// <-- write the program to print table by using do while loop

#include<stdio.h>
int main(){
   int a,n=1;
   
   printf("enter the number = ");
   scanf("%d",&a);
   do{

    printf("%d * %d = %d\n",a,n,a*n);
     n++;
   }while(n<=10);
  
     return 0;
}