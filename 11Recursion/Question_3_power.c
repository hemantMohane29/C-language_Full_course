// Makea function which calculates a raised to the power b using recursion 




#include<stdio.h>

int power(int n , int m){

 if (m==0)  return 1;
 else return n*power(n,m-1);

}
int main(){

  int n;
  printf("Enter the base n = ");
  scanf("%d",&n);

  int m;
  printf("Enter the power m = ");
  scanf("%d",&m);

  int p  = power(n,m);

  printf(" %d raised to the power %d is %d",n,m,p);


    return 0;
}