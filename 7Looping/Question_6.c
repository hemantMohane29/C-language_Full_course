// Display this without ap- 4 7 10 13 16  upto n terms

#include<stdio.h>

int main(){
  
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);

    // 4 7 10 13 16 19 upto n umbere of terms 
    // we are going to use extra variables
    int a = 4;

    for(int i=1; i<=n; i++){
        printf("%d\t",a);
        a = a+3;
    }

    return 0;
}