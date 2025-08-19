// Write a program to store roll number and marks obtained by 4 student side in a 

#include<stdio.h>
int main(){

// int r;
// printf("Enter the student roll number = ");
// scanf("%d",&r);

// int c = 3;

int arr[4][2] = {{21,22},{23,24},{80,85},{75,95}};


for(int i=0; i<=3; i++){

    for(int j=0; j<=1; j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}

return 0;
}