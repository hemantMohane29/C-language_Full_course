


#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("enter the number of integers you want : ");
scanf("%d",&n);

int* ptr = (int*) malloc(n*sizeof(int));
int*p = ptr;
for (int i = 0; i <= n; i++)
{
    scanf("%d\n ",&(*ptr));
    ptr++;
}
int* t = p;
for (int i = 0; i <= n; i++)
{
    printf(" enter = %d\n",(*p));
    p++;
}




return 0;
}