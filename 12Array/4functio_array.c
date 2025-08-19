// usinf function swap the araya element 


#include<stdio.h>
void fun(int x[]){
    int temp = x[0];
    x[0] = x[1];
    x[1] = temp;
    return;
}
int main(){
int arr[] = {1,2};
// printf("%d\n",arr[0],arr[1]);
fun(arr);

printf("%d\n%d",arr[0],arr[1]);
  return 0;
}