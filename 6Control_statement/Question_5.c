// If cost price and selling of an item is input thhrough the keyboard, write a program to determine whether the seller has made profit or incurred loss . 
// also a determine how much profit the made or loss he incurred.
#include<stdio.h>

int main(){
  
     int a ;
     printf(" Enter the cost price = ");
     scanf("%d",&a);

     int b ;
     printf(" Enter the selling  price = ");
     scanf("%d",&b);

  
     if(a>b){
        printf(" profit ");
     }

     else if (a == b ){
     printf("no profit and no loss");
    }    
     else {
   printf("loss");
     }
     
 
    return 0 ;
}
