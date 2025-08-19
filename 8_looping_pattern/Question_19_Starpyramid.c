// print thre given pattern 
   

//    *
//   ***
// *******


#include<stdio.h>

int main(){

    int n;
    printf("enter the number of rows = ");
    scanf("%d",&n);
    int nst =1;   
//  int nsp = n-i;
    for(int i=1; i<=n; i++){
     
        for(int k=1; k<=n-i; k++){

            printf("   ");
         }

        //  nsp =nsp - 1;

     for(int j=1; j<=nst; j++){

        printf(" * ");
     }
nst  =  nst + 2;
   
     printf("\n");

    }
    return 0;
}