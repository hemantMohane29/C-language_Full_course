// Create a stucture date that contains three members namely date month and years. create 2 structure variable  with different dates and now compare the two, if the dates are equal then display message as "equal" otherwise "unequal"

#include <stdio.h>
int main()
{

    typedef struct dates
    {
        int day;
        int month;
        int year;
    } date;

    date a, b;

    a.day = 29;
    a.month = 6;
    a.year = 2006;

    b.day = 26;
    b.month = 8;
    b.year = 2004;

    if (a.day == b.day && a.month==b.month && a.year==b.year)
        printf("there are some");
    else
        printf("there are not same");

    return 0;
}