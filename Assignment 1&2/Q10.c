//Implement a program to find who and how many students scored “99” in the marks array,
//emphasising data scanning and frequency counting 

#include <stdio.h>

int main() {
    int n, i, count = 0;

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];

    // Input marks of each student
    printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who scored 99:\n");

    // Traverse array to find students who scored 99
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d (Position %d)\n", i + 1, i + 1);
            count++;
        }
    }

    // Display result
    if (count == 0)
        printf("No student scored 99.\n");
    else
        printf("\nTotal students who scored 99: %d\n", count);

    return 0;
}