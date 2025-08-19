// Given an array of marks of students, if the mark of any student is less than 35 print its roll numbeer.[roll number here refers to the index of the arry]\


#include<stdio.h>
int main()
{

    int mark[]= {35 ,30 , 32 , 50 , 90 , 80};
    
    for(int i=0; i<=5; i++){

        if(mark[i]<=35){
            printf("index = %d\n",i);
        }
    }
    return 0;
}