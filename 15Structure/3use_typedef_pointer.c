// pointer problem solve 

#include<stdio.h>
typedef int* pointer;
int main(){

    int a = 5 , b = 6;
    pointer x = &a, y = &b;

    printf("%p\n",x);
    printf("%p",y);

return 0;
}