// create a structure to specify data on students with these attributes Roll number , name , department . course . year of joining .


#include <stdio.h>
#include <string.h>

struct student {
    int Roll_no;
    char name[20];
    char dept[20];
    char course[50];
    int year_of_j;
};

void check(struct student s1, struct student s2) {
    if (strcmp(s1.dept, s2.dept) == 0) {
        printf("true");
    } else {
        printf("false");
    }
}

int main() {
    struct student s1, s2;

    strcpy(s1.dept, "CSE");
    strcpy(s2.dept, "CSE - AI&DS");
    check(s1, s2);
    return 0;
}



