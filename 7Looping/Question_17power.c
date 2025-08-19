// two numbers are entered thrlough the keyboard . write a program to find the va;ue of one number raised to the of another

#include<stdio.h>
int main(){

 int a , b ;
 printf("enter the number to whom is find power = ");
 scanf("%d",&a);

 printf("Enter the number to whom give a power = ");
 scanf("%d",&b);

int power = 1;
for(int i=1; i<=b; i++){

    power = power * a;
}
printf("%d raised to the power %d is %d",a,b,power);
    return 0;
}