//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

// Function returning a structure
struct Student findTopper(struct Student s1, struct Student s2) {
    if(s1.marks > s2.marks) {
        return s1;
    }
    else {
        return s2;
    }
}

int main() {
    struct Student s1, s2, top;

    printf("Enter first student's name, roll number and marks: ");
    scanf("%29s %d %f", s1.name, &s1.roll_no, &s1.marks);

    printf("Enter second student's name, roll number and marks: ");
    scanf("%29s %d %f", s2.name, &s2.roll_no, &s2.marks);

    top = findTopper(s1, s2);

    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
