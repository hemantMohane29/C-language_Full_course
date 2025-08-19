// reverse a string

#include <stdio.h>
#include <string.h>
int main()
{

    char str[15];
    puts("enter the string");
    gets(str);

    int k = 0;
    int size = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {

        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    puts("reverse the string ");
    puts(str);

    return 0;
}