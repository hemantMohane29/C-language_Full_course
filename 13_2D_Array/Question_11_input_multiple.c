// Write a program to print the multiplicatioj of two matrices given by the user

#include <stdio.h>

int main()
{
    int m, n;

    // First matrix input
    printf("Enter dimensions for first matrix (rows columns): ");
    scanf("%d%d", &m, &n);
    int a[m][n];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        { // Fixed: changed n++ to j++
            scanf("%d", &a[i][j]);
        }
    }

    printf("First matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        { // Fixed: changed m++ to j++
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Second matrix input
    int p, q;
    printf("Enter dimensions for second matrix (rows columns): ");
    scanf("%d%d", &p, &q);

    if (n != p)
    {
        printf("Matrix multiplication not possible - columns of first matrix must equal rows of second matrix.\n");
        return 1;
    }

    int b[p][q];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        { // Fixed: changed q++ to j++
            scanf("%d", &b[i][j]);
        }
    }

    printf("Second matrix:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        { // Fixed: changed q++ to j++
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication
    int res[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    printf("Resultant matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}