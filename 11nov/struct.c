
#include <stdio.h>

struct student
{
    char name[20];
    int age;
    int gpa;
};

int main()
{

    // structs.
    struct student kevin;

    strcpy(kevin.name, "kevin");
    kevin.age = 25;
    kevin.gpa = 4;

    return 0;
}