// print n number to sum ( recursive call)


#include<stdio.h>
void sum(int n , int s){
  if(n==0) {       //check condition 
    printf("sum = %d",s); //print sum 
    return ;  
  }
  sum(n-1,n+s);  // update value according the step 
     return;
}

int main(){

  int n;
  printf("enter the n =");
  scanf("%d",&n);
  
    sum(n,0);

    return 0;

}


