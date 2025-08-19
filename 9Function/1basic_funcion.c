// basic function call in call

#include<stdio.h>


void hemant(){

    printf("hemant like video editing ");
    printf("\n");
    return;
}

void code(){
     hemant();
    printf("heman like code");
    printf("\n");
    return;
 }
void india(){
   code();
    printf("i livee my india ");
    printf("\n");
    return;
}

int main(){
india();
return 0;
}