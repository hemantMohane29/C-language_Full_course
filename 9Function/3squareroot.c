// library function


#include<stdio.h>
#include<math.h>

int main(){

   int a;
   printf("Enter the number = ");
   scanf("%d",&a);

   int root  = sqrt(a);
   int power = pow(2,2);
   printf("Power = %d\n",power);
   printf("Square = %d",root);

    return 0;
}