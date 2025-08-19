// print the given pattern 


// 1 
// A B
// 1 2 3 
// A B C d
// 1 2 3  4 5



#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            // Odd rows: print numbers
            for(int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else {
            // Even rows: print letters
            for(int j = 1; j <= i; j++) {
                printf("%c ", 'A' + j - 1);
            }
        }
        printf("\n");
    }

    return 0;
}
