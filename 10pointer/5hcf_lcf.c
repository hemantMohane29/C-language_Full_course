#include <stdio.h>

// Function to calculate HCF (GCD)
int findHCF(int a, int b) {
    int i, hcf;
    for(i = 1; i <= a && i <= b; ++i) {
        if(a % i == 0 && b % i == 0)
            hcf = i;
    }
    return hcf;
}

// Function to calculate LCM using HCF
int findLCM(int a, int b) {
    int hcf = findHCF(a, b);
    return (a * b) / hcf;
}

int main() {
    int num1, num2, hcf, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    hcf = findHCF(num1, num2);
    lcm = findLCM(num1, num2);

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
