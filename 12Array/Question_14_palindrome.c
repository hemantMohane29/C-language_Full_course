// if an array arr contains n elements, then check if the given  array is a palindrome or not 

#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if array is palindrome
    int isPalindrome = 1; // Assume it's palindrome initially
    for(int i = 0; i < n/2; i++) {
        if(arr[i] != arr[n-1-i]) {
            isPalindrome = 0;
            break;
        }
        }

    if(isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}