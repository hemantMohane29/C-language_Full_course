// Wap to print odd numberrs from 1 to 100

// #include<stdio.h>
// int main(){
//  int i;

//  for(i=1; i<=100; i++)
// {
//     if(i%2==0)
//         continue;

//     printf("%d\n",i);
// }

//     return 0;
// }

//  write thee programm to print all the even numbere by using continue statment 
#include<stdio.h>
int main(){

for (int i=1; i<=100; i++){

    if(i%2!=0)
    continue;

  printf("%d\n",i);
}
    return 0;
}