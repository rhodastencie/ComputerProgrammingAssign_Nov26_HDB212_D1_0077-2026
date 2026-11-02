#include <stdio.h>
#include <stdlib.h> // Required for malloc() and free()

int main() {
    int n, i;
    float *marks;
    float sum = 0.0, average = 0.0, highest, lowest;

    printf("========================================\n");
    printf(" SECTION C: Pointers & Dynamic Memory   \n");
    printf("========================================\n");

    // Ask user for the number of students dynamically
    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number entered.\n");
        return 1;
    }

    // Dynamically allocate memory for 'n' floats using malloc
    marks = (float *)malloc(n * sizeof(float));

    // Check if memory allocation was successful
    if (marks == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input marks into dynamically allocated memory
    printf("\nEnter the marks for %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    // Calculate average
    average = sum / n;

    // Initialize highest and lowest with the first element
    highest = marks[0];
    lowest = marks[0];

    // Find highest and lowest marks
    for (i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    // Display summary statistics
    printf("\n----------------------------------------\n");
    printf("-------- DYNAMIC MEMORY RESULTS --------\n");
    printf("----------------------------------------\n");
    printf("Total Students : %d\n", n);
    printf("Average Mark   : %.2f\n", average);
    printf("Highest Mark   : %.2f\n", highest);
    printf("Lowest Mark    : %.2f\n", lowest);
    printf("----------------------------------------\n");

    // Free the dynamically allocated memory to prevent memory leaks
    free(marks);
    marks = NULL;

    return 0;
}
