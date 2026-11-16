#include <stdio.h>

void saveStudent();
void displayStudents();
void addStudent();

// a) Save first student (write mode)
void saveStudent() {
    FILE *fp = fopen("students.txt", "w");
    char admNo[20], name[50], course[50];

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter admission number: ");
    fgets(admNo, sizeof(admNo), stdin);
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter course: ");
    fgets(course, sizeof(course), stdin);

    fputs("Admission No: ", fp);
    fputs(admNo, fp);
    fputs("Full Name: ", fp);
    fputs(name, fp);
    fputs("Course: ", fp);
    fputs(course, fp);
    fputs("\n", fp);

    fclose(fp);
}

// b) Display all records, character by character
void displayStudents() {
    FILE *fp = fopen("students.txt", "r");
    int ch;

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
}

// c) Add another student (append mode)
void addStudent() {
    FILE *fp = fopen("students.txt", "a");
    char admNo[20], name[50], course[50];

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("\nEnter admission number: ");
    fgets(admNo, sizeof(admNo), stdin);
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter course: ");
    fgets(course, sizeof(course), stdin);

    fputs("Admission No: ", fp);
    fputs(admNo, fp);
    fputs("Full Name: ", fp);
    fputs(name, fp);
    fputs("Course: ", fp);
    fputs(course, fp);
    fputs("\n", fp);

    fclose(fp);
}

// d) main
int main() {
    saveStudent();
    displayStudents();
    addStudent();
    displayStudents();

    return 0;
}