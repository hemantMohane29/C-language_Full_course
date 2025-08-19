// Count the number of element in given array greater than a given numbre x.


#include<stdio.h>
int main(){

int arr[7] = {1,2,3,4,5,6,7};
 int count=0,x = 4;

 for(int i=0; i<=6; i++){
    count+=arr[i];
}
printf(" = %d\n",count);

for(int i=0; i<=6; i++){
    if(arr[i]>x)
    printf("greater = %d ",arr[i]);
}
  return 0;
}