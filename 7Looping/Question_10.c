// Write the program to count digits of a givem number

#include<stdio.h>
int main(){
 
    int i;
    printf("enter the number= ");
    scanf("%d",&i);
    int count = 0;

    while(i!=0){
         
        i = i /10;
        count ++;
    }
printf("total number = %d",count);
    return 0;

}