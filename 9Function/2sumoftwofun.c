// using functio ad two number 


#include<stdio.h>
//int add(int x, inty){
//   return x+y;
// }
int add(int a , int b ){
    return a+b;
}

int main(){

   int a;
   printf("Emter the a =");
   scanf("%d",&a);

   int b;
   printf("Enter the b =");
   scanf("%d",&b);
   int sum =  add(a,b);
    printf("Sum = %d",sum);
   

    return 0;
}