// write a program to print out all armstrong nubers between 1 and 500. if sum of cibes of each digit of the number is equal to the number itself then the number is called an armstong number /.

#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result = result + (remainder * remainder * remainder);
        
       // removing last digit from the orignal number
       originalNum = originalNum / 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}