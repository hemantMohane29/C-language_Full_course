// print the factorials of first n number using function

// print first n fibonacci numbers


#include<stdio.h>

int factorial(int x){
  
    int product=1;

     for(int i=1; i<=x; i++){
     
        product = product * i;
        printf(" factorial %d  = %d\n",i,product);
     }
     return product;
}

int main(){
    int n;
    printf("enter the n =");
    scanf("%d",&n);

   factorial(n);
    return 0;
}