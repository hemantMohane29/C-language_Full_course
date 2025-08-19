// print the factorial of a given number 'n'

 #include<stdio.h>
int main(){

 int n;
 printf("Enter the value of n = ");
 scanf("%d",&n);

 int product = 1;
 for (int i = 1 ; i<=n ; i++){

     product = product *i;
     printf("factorial of given %d num = %d\n",i,product);
 }
 return 0;
}