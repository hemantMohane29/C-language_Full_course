// count the numbert of triples whose sum is equal to the given value x.



#include<stdio.h>
int main(){

  int arr[8] = {1,2,3,4,5,6,7,8};
  int n;
  printf("Enter the num = ");
  scanf("%d",&n);
  int total_triple = 0;

  for(int i =0; i<=7; i++){

   for(int j = i+1; j<=7; j++ ){

    for(int k =j+1; k<=7; k++){

       if(arr[i] + arr[j] +arr[k]= n){
          total_triple++;
       printf("pairs = (%d,%d,%d)",arr[i],arr[j],arr[k]);
       }
    }
   }

  }

  printf("%d",total_triple);


  return 0;
}