//malloc


#include<stdio.h>
#include<stdlib.h>
int main(){

    int* ptr = (int*) malloc(10*sizeof(int));
    printf("%d\n",*ptr);
    *ptr++;
    printf("%d",*ptr);


return 0;
}