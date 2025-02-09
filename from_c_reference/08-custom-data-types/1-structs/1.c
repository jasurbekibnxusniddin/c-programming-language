#include <stdio.h>

struct student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct student student1;

    printf("Enter student name: ");
    scanf("%s", student1.name);

    printf("Enter student age: ");
    scanf("%d", &student1.age);

    printf("Enter student GPA: ");
    scanf("%f", &student1.gpa);

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);

    return 0;
}