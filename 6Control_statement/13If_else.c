// write the question for using if statemnt and even odd number

#include <stdio.h>

int main()
{

    int a;

    printf("enter the number = ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {

        printf("even number ");
    }

    else
    {

        printf("odd number ");
    }

    return 0;
}