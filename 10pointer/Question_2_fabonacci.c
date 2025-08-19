// print first n fibonacci numbers


#include<stdio.h>

int fabonacci(int x){
  
    int sum , a=1 , b=1;
     for(int i=0; i<=x-2; i++){
        sum = a+b;
        a = b;
        b = sum;
        printf("fabonacci %d = %d\n",i,sum);
     }
     return sum;
}
int main(){
    int n;
    printf("enter the n =");
    scanf("%d",&n);

//    int fabonacci(n);
    fabonacci(n);
    return 0;
}