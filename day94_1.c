//Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

// Function accepting structure as parameter
void display(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf("%29s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    display(s);

    return 0;
}
