// IF the ages of ram , shayam and ajay are input through the keyboard, write a program to derermine the youngest of the three 

#include<stdio.h>

int main(){
int ram , shyam , ajay ;

printf("Enter the age of ram = ");
scanf("%d",&ram);
printf("Enter the age of shyam = ");
scanf("%d",&shyam);
printf("Enter the age of ajay = ");
scanf("%d",&ajay);

if(ram<shyam && ram<ajay){
    printf("ram agr = %d youngest of one ",ram);
}
if(shyam<ram && shyam<ajay){
    printf("shyam agr = %d youngest of one ",shyam);
}
if(ajay<shyam && ajay<ram){
    printf("ajay agr = %d youngest of one ",ajay);
}
    return 0;
}