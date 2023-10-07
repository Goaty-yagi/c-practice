#include <stdio.h>
#include <string.h>

struct Student{
    // seems obj or class
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){
    struct Student student1; // create instance without constructor
    student1.age = 16; // assign age attribute(int)
    student1.gpa = 3.4; // assign gpa attribute(double)
    printf("your age is %d, dpa is %.1f",student1.age, student1.gpa);

    // student1.name = 'alex' this doesn't work because of array
    strcpy(student1.name, "alex"); // strcpy is needed to assign array
    strcpy(student1.major, "it");

    printf("\nyour name is %s, major is %s", student1.name, student1.major);

    return 0;
}