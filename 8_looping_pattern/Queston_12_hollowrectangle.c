// print the given pattern 

// ********
// *       *
// *       *
// *********


#include<stdio.h>
int main (){

 for(int i=1; i<=4; i++){

    for(int j=1; j<=4; j++){
        if(j==1 || i ==1) printf(" * ");
        else if(j==4 || i == 4) printf(" * ");
        else printf("   ");
    }
    printf("\n");
 }
    return 0;
}