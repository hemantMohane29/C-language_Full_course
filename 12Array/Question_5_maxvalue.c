// find max value in array 


#include<stdio.h>
int main(){

 int arr[] = {-2,-4,-1,-5,-198,-12,-5};

 int max= arr[0];

 for(int i=0; i<=6; i++){

  if(max<arr[i])
     max = arr[i];
 }

 printf("%d",max);
    return 0;
}