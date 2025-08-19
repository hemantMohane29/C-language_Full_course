// add to array

// Write a program to store 10 at every index of a 2D matrix with 5Row and 5 columns

#include <stdio.h>
int main()
{

    int arr[2][2] = {{2, 2}, {2, 2}};
    int brr[2][2] = {{2, 2}, {2, 2}};

    printf("\n");
    int res[2][2];
    for (int i = 0; i <= 1; i++)
    {

        for (int j = 0; j <= 1; j++)
        {
            res[i][j] = arr[i][j] + brr[i][j];
        }
        printf("\n");
    }
    
    for (int i = 0; i <= 1; i++)
    {

        for (int j = 0; j <= 1; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}