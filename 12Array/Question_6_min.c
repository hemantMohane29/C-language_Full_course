// printf min element of the array.

#include<stdio.h>
#include<limits.h>
int main(){

 int arr[] = {-2,-4,-1,-5,-198,-12,-5};

 int min= INT_MAX;

 for(int i=0; i<=6; i++){

  if(min>arr[i])
     min = arr[i];
 }

 printf("%d",min);
    return 0;
}