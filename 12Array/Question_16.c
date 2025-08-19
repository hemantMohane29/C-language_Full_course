// Given an array containing element from 1 to 100 except one element in this range is missing. find the missing element.

#include<stdio.h>

int findMissing(int arr[], int size) {
    int expected_sum = 100 * (100 + 1) / 2;
    int actual_sum = 0;
    for (int i = 0; i < size; i++) {
        actual_sum += arr[i];
    }
    return expected_sum - actual_sum;
}

int main() {
    int arr[99]; // array with 99 elements (1 missing)
    // Assuming the array is already filled with numbers from 1 to 100 except one
    // For demonstration, let's create an example array where 45 is missing
    int j = 0;
    for (int i = 1; i <= 100; i++) {
        if (i != 45) {
            arr[j++] = i;
        }
    }
    
    int missing = findMissing(arr, 99);
    printf("The missing number is: %d\n", missing);
    
    return 0;
}