// create a structure type book with name price and number of page as it attributes

#include<stdio.h>
#include<string.h>
int main(){
   struct book
   {
    char name[50];
    int noof_page;
    float price;
   }A,B,C;
   
   strcpy(A.name,"love bird");
   A.noof_page = 200;
   A.price = 120.10;
   
  printf("%s\n",A.name);
  printf("%d\n",A.noof_page);
  printf("%f",A.price);


return 0;
}