// Create a structure type person with name salary and age as its attributes. declare and initialize 2 variable for this. print  the name of first person and age of the other

#include <stdio.h>
#include <string.h>
int main()
{

  struct Employee
  {
    char name[50];
    float salary;
    int age;

  } Hemant, Rahul;

  strcpy(Hemant.name, "Hemant Mohane");
  Hemant.age = 19;
  Hemant.salary = 98000.12;

  strcpy(Rahul.name, "Rahul Kumar");
  Rahul.age = 20;
  Rahul.salary = 12000.10;

  printf("Name: %s\n", Hemant.name);
  printf("Age : %d\n", Rahul.age);
  printf("Salary: %f", Hemant.salary);

  return 0;
}