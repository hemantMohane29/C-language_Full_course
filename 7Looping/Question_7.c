// Display this gp  1 2 4 8 16 32 upto n number terms 

// #include<stdio.h>
// int main(){

//   int n ;
//   printf("Enter the number = ");
//   scanf("%d",&n);
//   int a= 1;
//   for(int i=1; i<=n; i++){

//     printf("%d\t",a);
//     a = a * 2 ;

//   }
//     return 0;
// }           


// Display this gp  3 12 18  upto n number terms 
#include<stdio.h>
int main(){

  int n ;
  printf("Enter the number = ");
  scanf("%d",&n);
  int a= 3;
  for(int i=1; i<=n; i++){

    printf("%d\t",a);
    a = a * 4 ;

  }
    return 0;

}