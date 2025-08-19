// Ternary Operator


#include<stdio.h>

int  main(){
  
  int num;
  printf("Enter the number = ",num);
  scanf("%d",&num);

//ternary operator 
//   ex1 ? ex2 : ex3;
//   condition ? true : false :

  num%2==0 ? printf("even number") : printf("Odd number ");

  int x = 15;
  printf("\n %d %d %d ", x!=15 ,x=20, x<30);
    return 0;
}