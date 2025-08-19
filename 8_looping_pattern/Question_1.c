// print this given pattern 
// *****
// *****
// *****
// *****

#include<stdio.h>
int main(){
 int n;
 printf("enter the number rows = ");
 scanf("%d",&n);

 int m;
 printf("enter the number column = ");
 scanf("%d",&m);
  for(int i = 1; i<=n; i++)  // outer loop this is define rows
{
    for(int i =1; i<=m; i++){ // inner loop this is define column 
        printf("*");
    }
    printf("\n");  // har line ke bad enter dene ke liye hai 
                
    return 0;
}