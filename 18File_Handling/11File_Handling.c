#include<stdio.h>
#include<stdlib.h>
int main(){


   /*read*/

// FILE* ptr = fopen("11.1hemant.txt","r");
// char str[100];
//   if(fgets(str,50,ptr)!=NULL)
//    {
//     printf("%s",str);
//    }


   /*Write*/
 FILE* ptr = fopen("hemantbhai.txt","w");
 char str[] = "hemant bhai ke the best youtuber in madhya pradesh";
 fputs(str,ptr);
 fclose(ptr);

 return 0;
}