// Take input precentage of a student and print the grade according to marks:

#include<stdio.h>
int main(){
 
    int num;
    printf("Enter matrk = ");
    scanf("%d",&num);

if(num>=91 && num<=100)
  printf("Excellent");

// if(num=>81 && num<90)
//   printf("Very Good");
// break;

else if(num>=81 && num<=90)
  printf("Very Good");

else if(num>=71 && num<=80)
 printf("Good");

else if(num>=61 && num<=70)
 printf("Can do better");

else if(num>=51 && num<=60)
  printf("Average");

else if(num>=41 && num<=50)
  printf("Below Average");

else if(num>=31 && num<=40)
 printf("Fail");

else {
    printf("invaild number ");
}
    return 0;
}