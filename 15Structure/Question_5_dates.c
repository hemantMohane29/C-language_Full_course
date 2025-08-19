// Now create another structure variable by assigning the first date to it/ compare the first and third dates



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
   
    a=b;
    
    if (a.day == b.day && a.month==b.month && a.year==b.year)
        printf("there are some");
    else
        printf("there are not same");

    return 0;
}