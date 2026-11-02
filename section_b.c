#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5

// Define the Student structure
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function prototypes
void inputStudents(struct Student s[], int count);
void displayStudents(struct Student s[], int count);
float calculateAverage(struct Student s[], int count);

int main() {
    struct Student students[MAX_STUDENTS];

    printf("========================================\n");
    printf("   SECTION B: Structures & Functions    \n");
    printf("========================================\n");

    // Call functions
    inputStudents(students, MAX_STUDENTS);
    displayStudents(students, MAX_STUDENTS);

    float classAverage = calculateAverage(students, MAX_STUDENTS);
    printf("\nOverall Class Average Marks: %.2f\n", classAverage);

    return 0;
}

// Function to input student records
void inputStudents(struct Student s[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
}

// Function to display all student records
void displayStudents(struct Student s[], int count) {
    printf("\n----------------------------------------\n");
    printf("---------- STUDENT RECORDS LIST ---------\n");
    printf("----------------------------------------\n");
    printf("ID\tName\t\tMarks\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s\t%.2f\n", s[i].id, s[i].name, s[i].marks);
    }
    printf("----------------------------------------\n");
}

// Function to calculate the average marks using the structure data
float calculateAverage(struct Student s[], int count) {
    float sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += s[i].marks;
    }
    return sum / count;
}
