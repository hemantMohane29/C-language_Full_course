// Given three points x1,y1  and x2,y2 and x3,y3 write a program to check if all the three points fall on one straight line.

#include<stdio.h>

int main(){

int x1 , x2 , y1 , y2 , x3 , y3 ;

printf("Enter the value of x1 = ");
scanf("%d",&x1);
printf("Enter the value of y2 = ");
scanf("%d",&y2);
printf("Enter the value of x2 = ");
scanf("%d",&x2);
printf("Enter the value of y2 = ");
scanf("%d",&y2);
printf("Enter the value of x3 = ");
scanf("%d",&x3);
printf("Enter the value of y3 = ");
scanf("%d",&y3);


double straight_line_m1 = (y2 - y1) /(x2 - x1); 
double straight_line_m2 = (y3 - y2) /(x3 - x2);

printf("slope of m1 = %lf\n",straight_line_m1);
printf("slope of m2 = %lf\n",straight_line_m2);

if(straight_line_m1 == straight_line_m2){
    printf(" this is the straight line");
}
else {
    printf(" This is not a straight line");
}

    return 0;
}