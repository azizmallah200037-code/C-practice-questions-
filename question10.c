// Check grade and add remarks for students
#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter marks (out of 100): ");
    scanf("%d", &marks);

    if (marks >= 90) {
        grade = 'A';
        printf("Grade: %c | Remarks: Excellent\n", grade);
    } else if (marks >= 80) {
        grade = 'B';
        printf("Grade: %c | Remarks: Very Good\n", grade);
    } else if (marks >= 70) {
        grade = 'C';
        printf("Grade: %c | Remarks: Good\n", grade);
    } else if (marks >= 60) {
        grade = 'D';
        printf("Grade: %c | Remarks: Satisfactory\n", grade);
    } else if (marks >= 40) {
        grade = 'E';
        printf("Grade: %c | Remarks: Needs Improvement\n", grade);
    } else {
        grade = 'F';
        printf("Grade: %c | Remarks: Fail\n", grade);
    }

    return 0;
}
