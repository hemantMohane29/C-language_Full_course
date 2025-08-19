// write to check if anumber is prime or not


#include<stdio.h>
int main(){

    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    int a = 0;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            a=1;
            break;
        }
        
    }
   if (n==1)
    printf("1 neither prime nor composite ");

    else if(a==0)
    printf("this number is prime number");

    else 
    printf("this number is not prime");
    return 0;
}


// concept 

// prime number is divisible by 1 and self 
// logic input n=number 
// condintion = n-1;
// kiyu ki yadi ham condition n likh dege toh computer n/n = 0 
// output de dega or print kar dega prime number 

// a=0; condition 
// yadi a=1 o jaya hai toh not prime number print ho jayyega 

// a=0 hi raha toh print ho jayage prime number 