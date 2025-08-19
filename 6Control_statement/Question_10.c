// Take 3 numbers input and tell if they can be the sides of a triangle 

#include<stdio.h>

int main(){


    int a,b,c;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    printf("Enter the value of c = ");
    scanf("%d",&c);

    if ( (a+b)>c || (b+c)>a || (a+c)<b ){
        printf("Vaild triangle");
    }
    
    else {
        printf("Invaild triangle");
    }
 

    return 0;  
}