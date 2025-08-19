#include<stdio.h>
int main()
{
    int number, i, factor = 0;
    printf("enter the number=");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            factor = factor + 1;
        }
    }
    if (factor == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
    return 0;
}