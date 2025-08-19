// Given a matrix a of dimension n*m and 2 coordinates (l1,r1) and (l2,r2). return the sum of the rectangle from (l1,r1) to (l2,r2)

// Find the sum of a given matrix of n8m.

#include <stdio.h>
int main()
{

    int r;
    int c;
    printf("Enter the number of row = ");
    scanf("%d", &r);

    printf("Emter the number of column = ");
    scanf("%d", &c);

    printf("\n");

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

int sum = 0;
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        printf("sum of array is = %d", sum);
        }
        printf("\n");
    }

    return 0;
}