// string as pointer 

#include<stdio.h>
#include<string.h>
int main(){

    char str[] = "hemant mohane";
    char* ptr = str;
    int i=0; 
    while(*ptr!='\0'){

        printf("%c",*ptr);
        ptr++;
        i++;
    }


return 0;
}