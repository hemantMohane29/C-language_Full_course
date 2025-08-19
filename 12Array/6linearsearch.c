#include<stdio.h>
#include<stdbool.h>
int main(){

int arr[7] = {1,45,78,41,24,58,14};
int x = 41;
int idx= -1;

bool flag = false; // false means not present 
for(int i=0; i<=6; i++){
    if(arr[i]==x){
        flag = true; // true means present
        idx = i;
        break;
    }
}
if(flag==false){
    printf("%d number is not present in this array and index %d",x,idx);
}
else{
        printf("%d number is present in this array and index %d",x,idx);
}
return 0;
}