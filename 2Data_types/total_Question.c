// write the programm fo 5 subject %


#include<stdio.h>
int main(){
   
     float hindi , english , maths , science ,so_science;
     float per;
     int sum ;
   
      printf("enter you subject mark:");
      printf("\nHindi:");
      scanf("%f",&hindi);
      printf("\nmaths:");
      scanf("%f",&maths);
      printf("\nscience:");
      scanf("%f",&science);
      printf("\nenglish:");
      scanf("%f",&english);
      printf("\nso.science:");
      scanf("%d",&so_science);
 per =  (hindi + english + maths + science + so_science)/5;
 sum = (hindi + english + maths + science + so_science);

  printf("sum of all subject = %d",sum);
  printf("\npercentage = %f",per);
  
    return 0;
} 