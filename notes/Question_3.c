// Print all the even number from 1 to 100

#include<stdio.h>

int main(){

for ( int i = 1; i <= 100; i++ ){
 
if(i%2==0)
    printf("%d = even number \n",i);

    else 
        printf("%d = odd number \n",i);

}
    return 0;
}