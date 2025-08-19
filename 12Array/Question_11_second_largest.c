// find the second largest element int the givem array  

#include<stdio.h>
#include<limits.h>
int main(){

int arr[7] = {1,2,3,4,5,6,7};

int max= INI_MIN;
int second= INI_MIN; ;
for(int i=0; i<=6; i++){

  if(max<arr[i])
{   second = max; //second is now previous max
     max = arr[i]; //max is now a new max

}
else if(second<arr[i] && max!=[i]){  //max > arr[i]
    second = arr[i];
}
}

  
printf("%d",second);
  return 0;
}