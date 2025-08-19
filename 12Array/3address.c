// addresss printing in a array 


// #include<stdio.h>
// int main(){

//   int arr[] = { 1 , 2 ,3 ,4};

//   for(int i=0; i<=3; i++){
//     printf("address of %d = %p\n",i,&arr[i]);
//   }
//     return 0;
// }


#include<stdio.h>
int main(){

 int sub[50],i;
 for(i=0; i<=48; i++);
 {
    sub[i] = i;
    printf("\n%d",sub[i]);
 }


    return 0;
}