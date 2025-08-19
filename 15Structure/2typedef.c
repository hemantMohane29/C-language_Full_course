// Typedef,,,,

#include<stdio.h>
#include<string.h>
int main(){
   typedef struct book
   {
    char name[50];
    int noof_page;
    float price;
   }Book;

   Book A;
   Book B;
   Book C;
   Book D;
   
   strcpy(A.name,"love bird");
   A.noof_page = 200;
   A.price = 120.10;
   
  printf("%s\n",A.name);
  printf("%d\n",A.noof_page);
  printf("%f",A.price);


return 0;
}