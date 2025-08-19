// Memory deallocation

#include<stdio.h>
#include<stdlib.h>
int main(){

    int* ptr_head = (int*) calloc(10,sizeof(int));
    int* ptr = ptr_head;
    ptr++;
    free(ptr);


return 0;
}