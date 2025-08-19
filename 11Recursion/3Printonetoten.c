// print 1 to reveser 

// print morning on many time using recursion 

#include<stdio.h>
void reverser(int x){

    if(x==0) return ;
    printf("%d\n",x);
    reverser(x-1);
    return;
}

int main(){
    int n;
    printf("enter n = ");
    scanf("%d",&n);

  reverser(n);

    return 0;
}