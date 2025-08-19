// Print thee given pattern

// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<stdio.h>
int main(){

 int n;
 printf("enter the number = ");
 scanf("%d",&n);

 for(int i=1; i<=n; i++){
  int a = n+1-i;
for(int j=1; j<=a; j++)
{

    printf(" %d ",j);
}

    printf("\n");
 }



    return 0;
}