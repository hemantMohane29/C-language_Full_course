// Memory Re-Allocation

#include<stdio.h>
#include<stdlib.h>
int main(){

    int* ptr = (int*) malloc(10*4);  //007C29A0
    printf("%p\n",ptr);

    ptr = realloc(ptr,200*4); //007C2250
    printf("%p",ptr);


return 0;
}