
// struct employee
// {
//     int emp_id;
//     char name;
//     float salary;
// };

#include <stdio.h>
int main()
{
    struct student
    {

        char id;
        int heigth;
        int weight;
    } hemant, Rohan;

    // struct student hemant;
    hemant.id = 'A';
    hemant.heigth;
    printf("enter the hemant heigth = ");
    scanf("%d", &hemant.heigth);
    hemant.weight = 74;

    // struct student Rohan;
    // Rohan.id = 'B';
    // Rohan.heigth = 155;
    // Rohan.weight = 64;
    Rohan = hemant; //<-- deep copy

    printf("id = %d\n", hemant.id);
    printf("heigth = %d\n", hemant.heigth);
    printf("weight = %d", hemant.weight);

    printf("\n\n");

    printf("id = %d\n", Rohan.id);
    printf("heigth = %d\n", Rohan.heigth);
    printf("weight = %d", Rohan.weight);

    return 0;
}