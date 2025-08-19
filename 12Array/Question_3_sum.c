// calculate the sum of all the element in the given array 

#include<stdio.h>
int main(){

 int arr[5] = { 1,2,3,4,5};
 int sum =0;
 for(int i=0; i<=4; i++){

  sum = sum + arr[i];

 }
 printf("sum = %d",sum);
    return 0;
}


// user input 

#include<stdio.h>
int main(){
  int n;
    printf("enter the n = ");
    scanf("%d",&n);
    
    int arr[n];
  for(int i=0; i<=(n-1); i++ ){

    scanf("%d",&arr[i]);
  }

 int sum =0;
  for(int i=0; i<=(n-1); i++){

    sum = sum + arr[i];
  }

  printf("sum = %d",sum);

    return 0;
}