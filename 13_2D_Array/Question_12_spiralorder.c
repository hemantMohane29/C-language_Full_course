// Given an n x matrix a print all elements of the matrix in spiral order

#include <stdio.h>

void printSpiral(int n, int a[n][n])
{
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right)
    {
        // Print top row (left to right)
        for (int i = left; i <= right; i++)
        {
            printf("%d ", a[top][i]);
        }
        top++;

        // Print right column (top to bottom)
        for (int i = top; i <= bottom; i++)
        {
            printf("%d ", a[i][right]);
        }
        right--;

        // Print bottom row (right to left, if it exists)
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                printf("%d ", a[bottom][i]);
            }
            bottom--;
        }

        // Print left column (bottom to top, if it exists)
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                printf("%d ", a[i][left]);
            }
            left++;
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Spiral order: ");
    printSpiral(n, a);
    printf("\n");

    return 0;
}