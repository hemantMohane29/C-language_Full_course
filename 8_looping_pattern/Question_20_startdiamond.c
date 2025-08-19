// printf given pattern 


//     *
//    ***
//   *****
// *********
//  *******
//    ****
//      *


#include <stdio.h>

int main() {
  int n;
  printf("enter number of rows = ");
  scanf("%d",&n);

    // Upper pyramid
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower inverted pyramid (n-1 rows)
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
