// using array to create the code

#include <stdio.h>
#include <string.h>

int main()
{

    typedef struct person
    {
        char name[50];
        int age;
        int height;
        int weight;
        char tier;
    } human;

    human arr[3];

    strcpy(arr[0].name, "Hemant Mohane");
    arr[0].age = 19;
    arr[0].height = 172;
    arr[0].weight = 62;
    arr[0].tier = 'A';

    strcpy(arr[1].name, "Rudra Kumar");
    arr[1].age = 19;
    arr[1].height = 172;
    arr[1].weight = 62;
    arr[1].tier = 'H';

    strcpy(arr[2].name, "Abhishek kumar");
    arr[2].age = 19;
    arr[2].height = 172;
    arr[2].weight = 62;
    arr[2].tier = 'V';

    for (int i = 0; i < 3; i++)
    {

        printf("Name = %s\n", arr[i].name);
        printf("Age = %d\n", arr[i].age);
        printf("weigth = %d\n", arr[i].weight);
        printf("height = %d\n", arr[i].height);

        printf("\n");
    }

    return 0;
}