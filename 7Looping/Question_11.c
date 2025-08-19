// wap to print sum of digit of a givem number 

#include<stdio.h>
int main(){

int i , last_digit=0;
printf("enter the value of n = ");
scanf("%d",&i);
int sum = 0;
while(i!=0){
    
    last_digit = i % 10;
    sum = sum + last_digit;
    i = i / 10 ;
}
printf("sum = %d",sum);
    return 0;
}