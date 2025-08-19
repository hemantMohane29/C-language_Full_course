// print morning on many time using recursion 

#include<stdio.h>
void greet(int x){

    if(x==0) return ;
    printf("Good morning\n");
    greet(x-1);
    return;
}

int main(){
    int n;
    printf("enter n = ");
    scanf("%d",&n);

  greet(n);

    return 0;
}