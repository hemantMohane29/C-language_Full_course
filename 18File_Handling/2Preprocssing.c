// Preprocessing 



#include<stdio.h>   // handler file 
#include<math.h>
#include<limits.h>
#include<string.h>
int main(){

    float x = sqrt(2);
    printf("%f\n",x);
    float y = cbrt(10);
    printf("%f\n",y);

    int a = INT_MIN;
    int b = INT_MAX;
printf("%d - %d\n",a,b);

     float c = __SIZEOF_FLOAT__;
     printf("\n%f\n",c);

return 0;
}