#include <stdio.h>
int main()
{

   int a, b;
   char op;

   printf("enter the +,-,*,/ = ");
   scanf("%c", &op);

   printf("enter the value of a = ");
   scanf("%d", &a);

   printf("enter the value of b = ");
   scanf("%d", &b);

   switch (op)
   {

   case '+':
      printf("sum of = %d", a + b);
      break;

   case '-':
      printf("sum of = %d", a - b);
      break;

   case '*':
      printf("sum of = %d", a * b);
      break;

   case '/':
      printf("sum of = %d", a / b);
      break;
   }
   return 0;
}