// Display this ap- 4 7 10 13 16  upto n terms

#include<stdio.h>
int main(){

   int n;
   printf("enter the value of n =  ");
   scanf("%d",&n);

   for(int i=4; i<=3*n+1; i=i+3){
   printf("%d\t",i);
   }

    return 0;
}


// concept
  
// 4 7 10 13 16 
// a= 4 d = 7 - 4 = 3 
// formula = a + (n - 1) * d
//         = 3n+1 