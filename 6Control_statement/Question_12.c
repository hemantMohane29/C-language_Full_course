

#include<stdio.h>

int main(){

 int a;
 printf("Enter the value of a = ");
 scanf("%d",&a);
  
 //  ((a%5==0 || a%3==0 )&& a%15!=00)
 if(a%5==0 || a%3==0){
    if(a%15!=0){
        printf("the number is divisible by 5 , 3  and not 15");
    }
    else {
        printf("divisible by and  15");
    }

 }
 else {
    printf("not divisible ");
}



    return 0;
}