#include <stdio.h>

#define SIZE 10

int main() {
    float marks[SIZE];
    float sum = 0.0, average;
    float highest, lowest;

    printf("======================================\n");
    printf("      STUDENT MARKS PROCESSING        \n");
    printf("======================================\n\n");

    // Part (a): Read the marks using a loop
    printf("Enter the marks for %d students:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i]; // Accumulate total sum for average calculation
    }

    // Part (b): Calculate the average mark
    average = sum / SIZE;

    // Part (c): Determine the highest and lowest marks
    highest = marks[0];
    lowest = marks[0];

    for (int i = 1; i < SIZE; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    // Display Results Summary
    printf("\n--------------------------------------\n");
    printf("RESULTS SUMMARY:\n");
    printf("--------------------------------------\n");
    printf("Average Mark : %.2f\n", average);
    printf("Highest Mark : %.2f\n", highest);
    printf("Lowest Mark  : %.2f\n", lowest);

    // Part (d): Display all marks greater than the average
    printf("\n--------------------------------------\n");
    printf("Marks Greater Than Average (%.2f):\n", average);
    printf("--------------------------------------\n");
    
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (marks[i] > average) {
            printf("Student %d: %.2f\n", i + 1, marks[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("No marks were higher than the average.\n");
    }

    printf("======================================\n");

    return 0;
}
