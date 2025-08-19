// print the null value using null character 

#include<stdio.h>
int main(){

char arr ='\0';  // null character 
char str[13] = "hemant mohane";
str[0] = 98;
printf("%c",arr);
printf("%s",str);

return 0;
}