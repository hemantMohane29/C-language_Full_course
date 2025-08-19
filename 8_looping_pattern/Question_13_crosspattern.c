// print cross pattern 


#include <stdio.h>

int main() {
    int n = 7; // You can change this to any odd number >= 3

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i==j || i + j == n+1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
