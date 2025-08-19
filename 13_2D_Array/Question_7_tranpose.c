// Write a program to print the transpose of the matrix entered by the user

#include <stdio.h>
int main()
{

    int r, c;
    printf("enter the value of r and c = ");
    scanf("%d%d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int brr[r][c];
    for (int i = 0; i < c; i++)
    {

        for (int j = 0; j < r; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }

    printf("\n");

    for (int i = 0; i < c; i++)
    {

        for (int j = 0; j < r; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}