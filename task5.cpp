#include <stdio.h>

int main() {
    int grades[10];       
    int i, maxI = 0, minI = 0;
    float sum = 0, average;


    printf("Enter grades of 10 students:\n");
    for(i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i]; 
    }


    printf("\nGrades of all students:\n");
    for(i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }


    average = sum / 10;
    printf("\nAverage grade of class: %.2f\n", average);

    
    for(i = 1; i < 10; i++) {
        if(grades[i] > grades[maxI])
            maxI = i;
        if(grades[i] < grades[minI])
            minI = i;
    }

    printf("Highest grade: %d (Index: %d)\n", grades[maxI], maxI);
    printf("Lowest grade: %d (Index: %d)\n", grades[minI], minI);

    
    printf("\nEnter new grade for the student with the lowest score: ");
    scanf("%d", &grades[minI]);

    
    printf("\nUpdated grades of all students:\n");
    for(i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }

    return 0;
}

