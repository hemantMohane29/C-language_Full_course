#include<stdio.h>
#include<string.h>
int main(){

    char str[] = "hemant mohane";
    puts(str);

    char a[40];
    printf("enter the name = ");
    scanf("%[^\n]s",a);
    // gets(a);   entire sentence can be input 
    printf("%s",a);


return 0;
}