// aking input to user 

#include<stdio.h>

int main(){
 
    int arr[5];

    
    printf("enter the first array= ");
    scanf("%d",&arr[0]);
    printf("enter the second array= \n");
    scanf("%d\n",&arr[1]);
    printf("enter the third array= \n");
    scanf("%d\n",&arr[2]);
    printf("enter the four array= \n");
    scanf("%d\n",&arr[3]);
    printf("enter the five array= \n");
    scanf("%d\n",&arr[4]);

    for(int i=0; i<=4; i++){

        printf("%d",arr[i]);
    }


    return 0;
}