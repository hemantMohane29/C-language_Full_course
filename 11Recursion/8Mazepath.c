// maza path in reecursive 

#include<stdio.h>

int maze(int n, int m) {
    // Base case: when at the bottom-right corner, only 1 path
    if (n == 1 || m == 1) {
        return 1;
    }
    // Recursive case: paths from right + paths from down
    return maze(n - 1, m) + maze(n, m - 1);
}

int main() {
    int n;
    printf("Enter the n = ");
    scanf("%d", &n);  // Fixed syntax error here (changed . to ,)
    
    int noway = maze(n, n);  // Assuming square maze
    
    printf("Number of ways = %d", noway);
    
    return 0;
}