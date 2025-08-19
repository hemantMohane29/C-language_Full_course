// pascal triangle 


#include<stdio.h>

int factorial(int x){
  int fact = 1;
  for(int i=2; i<=x; i++){
     fact = fact * 1 ;
  }
  return x;
}
int combination(int n , int r){
int ncr = factorial(n)/(factorial(n-r) * factorial(r));
return ncr;
}
int main(){
    
int n;
printf("Enter the n = ");
scanf("%d",&n);

for(int i=0; i<=n; i++)
{
    for(int k=0; k<=n-i; k++){
        printf("\n");
    }
for(int j=0; j<=i; j++){

    int icj = combination(i,j);
    printf("%d ",icj);
}
printf("\n");
}

return 0;
}