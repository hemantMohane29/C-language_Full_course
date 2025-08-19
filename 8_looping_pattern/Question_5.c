// Print the given pattern 

// * * * *
// * * *
// * * 
// *

#include<stdio.h>
int main(){
 
  for(int i = 1; i<=4; i++){
   
    int a = 4+1-i; 

  for(int j=1; j<=a; j++){
    printf(" * ");
  }
  printf("\n");

  }



    return 0;
}