// WAP to find a duplicate element from a given array of integers.

#include<stdio.h>
int main(){

 int arr[7] = {1,2,4,7,5,1};
   for (int i=0; i<=6; i++){
    for(int j=i+1; j<=6; j++){
        if(arr[i]==arr[j]){
            printf("%d is the duplicate and index %d , %d \n",arr[i],i,j);
            break;
        }
    }
}

return 0;
}