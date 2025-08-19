// power function (logarithmic)



#include <stdio.h>

int power(int n, int m) {
    if (m == 0) return 1;           // Base case: n^0 = 1
    if (m % 2 == 0) {               // If m is even
        int half_power = power(n, m / 2);
        return half_power * half_power;
    } else {                        // If m is odd
        return n * power(n, m - 1);
    }
}

int main() {
    int n, m;
    printf("Enter base (n): ");
    scanf("%d", &n);
    printf("Enter exponent (m): ");
    scanf("%d", &m);
    
    printf("%d^%d = %d\n", n, m, power(n, m));
    return 0;
}