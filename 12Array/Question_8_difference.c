// Find the difference between tha sum of elements at even indices to the sum elements at odd indices.

#include<stdio.h>
int main(){

int arr[7] = {1,2,3,4,5,6,7};
 int even_sum =0;
 int odd_sum = 0;

 for(int i=0; i<=6; i++){
  
    if(arr[i]%2!=0) odd_sum+=arr[i];
    else even_sum+=arr[i]; 
}
int result= odd_sum-even_sum;

printf("%d",result);
  return 0;
}