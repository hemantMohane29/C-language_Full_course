// write a program to prite all the ASCll values and their equaivalent characters of 26 alphabets using a while loop

#include<stdio.h>
int main(){

  for(int i=65; i<=90; i++){

    printf("%d = ",i);
    char ch = (char)i;
    printf("%c\n",ch);
  }

    return 0;
}


// #include<stdio.h>
// int main(){

//   for(int i=97; i<=122; i++){

//     printf("%d = ",i);
//     char ch = (char)i;
//     printf("%c\n",ch);
//   }

//     return 0;
// }