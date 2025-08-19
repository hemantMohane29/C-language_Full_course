// Write a program to print the rows number having the maximum sum in a given matrix\


#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[100][100];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int max_sum = -1;
    int row_sums[100] = {0};

    // Calculate the sum of each row
    for (int i = 0; i < n; i++)
    {
        row_sums[i] = 0;
        for (int j = 0; j < m; j++)
        {
            row_sums[i] += matrix[i][j];
        }
        // Update the maximum sum found so far
        if (row_sums[i] > max_sum)
        {
            max_sum = row_sums[i];
        }
    }

    // Print all rows with the maximum sum
    printf("Rows with the maximum sum (%d): ", max_sum);
    for (int i = 0; i < n; i++)
    {
        if (row_sums[i] == max_sum)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}