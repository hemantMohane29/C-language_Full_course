// Write the program to rotation to array 90 tp clockwise

#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the number of rows and columns = ");
    scanf("%d%d", &r, &c);
    int arr[r][c];

    // Input the array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nOriginal array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // For 90 degree clockwise rotation, we first transpose the matrix
    // and then reverse each row
    int brr[c][r]; // Note the dimensions are swapped for rotation
    
    // Transpose the matrix
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            brr[i][j] = arr[j][i];
        }
    }

    printf("\nTransposed array:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    // Reverse each row for clockwise rotation
    for (int i = 0; i < c; i++) {
        int start = 0;
        int end = r - 1;
        while (start < end) {
            int temp = brr[i][start];
            brr[i][start] = brr[i][end];
            brr[i][end] = temp;
            start++;
            end--;
        }
    }

    // Print the rotated array
    printf("\nArray after 90 degree clockwise rotation:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}