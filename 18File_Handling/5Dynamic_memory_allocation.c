// staic : which means that me memory is allocation during complier 

// Dynamic : Which means that the memory is allocated during run time.

#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    printf("Enter the array Size :");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("\n%d",arr[i]);
    }
    

return 0;
}