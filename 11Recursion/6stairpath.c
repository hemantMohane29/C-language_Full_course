// stair path

#include<stdio.h>

int stair_path(int n){

  if (n==1 || n==2 || n==3) return n;
  int total_way = stair_path(n-1) + stair_path(n-2) + stair_path(n-3) ;

 return total_way;
}

int main(){
 
    int n;
    printf("Enter the n = ");
    scanf("%d",&n);

   int way =  stair_path(n);
  printf("total_way = %d",way);


    return 0;
}