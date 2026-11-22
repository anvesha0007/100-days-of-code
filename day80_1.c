//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    char name[30];
    int roll;
    float marks;

    // Open file for writing
    fp = fopen("students.txt", "w");

    if(fp == NULL) {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Store student records
    for(i = 0; i < n; i++) {
        printf("\nEnter name, roll number and marks: ");
        scanf("%29s %d %f", name, &roll, &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Open file for reading
    fp = fopen("students.txt", "r");

    printf("\nStudent Records:\n");

    // Read and display records
    while(fscanf(fp, "%29s %d %f", name, &roll, &marks) == 3) {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %.2f\n", marks);
    }

    fclose(fp);

    return 0;
}
