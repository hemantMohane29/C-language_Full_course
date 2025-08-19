// print zig zag 

#include<stdio.h>

int main(){
void zigzag(int n){

 if(n==0) return;

 printf("%d",n);  

  zigzag(n-1);
 printf("%d",n);

  zigzag(n-1);
 printf("%d",n);
 
  return;
}
  int n;
  printf("enter the n = ");
  scanf("%d",&n);

  zigzag(n);

    return 0;
}




