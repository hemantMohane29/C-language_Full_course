// Take 4 positive integers input & print the greater of them

#include<stdio.h>

int main(){

    int a, b, c, d;
    
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of  b = ");
    scanf("%d",&b);
    printf("Enter the value of c = ");
    scanf("%d",&c);
    printf("Enter the value of d = ");
    scanf("%d",&d);


    if(a>b && a>c && a>d){
    printf("a = %d greater than to b,c and d ",a);
    }
    if(b>a && b>c && b>d){
    printf("b = %d greater than to a,c and d ",b);
    }
    if(c>b && c>a && c>d){
    printf("c = %d greater than to b,a and d ",c);
    }
    if(d>b && d>c && d>d){
    printf("d = %d greater than to b,c and a ",d);
    }
  else if(a==b && b==c && c==d && d==a){
    printf("a,b,c and d is equal ");
  }
    return 0;
}