#include<stdio.h>
#include<string.h>
void check(student s1 , student s2)
{

    if (s1.depf == s2.dept){
        printf("true");
    }
    else {
        printf("false");
    }


}
int main(){

struct student
{
    int Roll_no;
    char name[20];
    char dept[20];
   char course[50];
   int year_od_j;

};
struct student s1,s2;

  strcpy(s1.dept,"CSE");
  strcpy(s2.dept,"CSE");
  check(s1,s2);


return 0;
}