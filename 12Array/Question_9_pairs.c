// Find the total number of pairs in the array whose sum is equal to the given value x.


#include<stdio.h>
int main(){

  int arr[8] = {1,2,3,4,5,6,7,8};
  int n;
  printf("Enter the num = ");
  scanf("%d",&n);
  int total_pair =0;

  for(int i =0; i<=7; i++){

   for(int j = i+1; j<=7; j++ ){
      
       if(arr[i] + arr[j] = n){
          total_pair++;
       printf("pairs = (%d,%d)",arr[i],arr[j]);
       }
   }

  }

  printf("%d",total_pair);


  return 0;
}