// if the ages of ram , shyam and ajay are input through the keyboard, write a program to determine the youngest of the threee 

#include<stdio.h>
int main(){
   int ram , shyam , ajay ;
   
printf("Enter the age of ram = ");
scanf("%d",&ram);
printf("Enter the age of shyam = ");
scanf("%d",&shyam);
printf("Enter the age of ajay = ");
scanf("%d",&ajay);

if(ram<shyam ) {
    if(ram<ajay){

        printf("Ram is young person ");
    }
}
if(shyam<ram ) {
    if(shyam<ajay){

        printf("shyam is young person ");
    }
}
if(ajay<shyam ) {
    if(ajay<ram){

        printf("ajay is young person ");
    }
}
else if (ram == shyam ){

      if(shyam == ajay){
         if (ajay == ram){
            printf("equal");
         }
      }
}
    return 0;
}