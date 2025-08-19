// A recird contains name of cricketer, his age number of test matches that he has played and the average rins that he has scored in each test match. create an array of structure to hold recoreds of 20 suh cricket and then write a program to read these records.

#include<stdio.h>
#include<string.h>
int main(){

typedef struct cricket
{
   char first_name[20];
   char last_name[20];
   int age;
   int no_of_match;
   float average;
} cricketer;

cricketer arr[3];

for(int i=0; i<3; i++){
    printf("first name =");
    scanf("%s",arr[i].first_name);
    printf("last name =");
    scanf("%s",arr[i].last_name);
    printf("enter the age =");
    scanf("%d",&arr[i].age);
    printf("no of mathces = ");
    scanf("%d",&arr[i].no_of_match);
    printf("Average =");
    scanf("%f",&arr[i].average);
}

for(int i=0; i<3; i++){
    printf(" name = %s  %s\n",arr[i].first_name,arr[i].last_name);
    printf(" Age = %d\n",arr[i].age);
    printf("Number of matches played = %d\n",arr[i].no_of_match);
    printf(" Average = %f\n",arr[i].average);
    
    printf("\n");
    printf("\n");
}

return 0;
}