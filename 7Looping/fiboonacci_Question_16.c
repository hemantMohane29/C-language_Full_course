// print the nth fibonacci number

#include<stdio.h>
int main(){

    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    int a = 1  , b = 1 , sum=1;

    printf("fiboonacci numbe  = %d\n",sum);
    printf("fiboonacci numbe  = %d\n",sum);
    for(int i=1; i<=n-2; i++){
     
        sum = a+b;
        a = b;
        b = sum;
        printf("fiboonacci %d numbe  = %d\n",i,sum);
    }
   

    return 0;
}