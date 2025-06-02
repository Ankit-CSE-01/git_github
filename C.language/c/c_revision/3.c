#include <stdio.h>

int main() {
    int num;
    char grade;

    // Prompt user for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // If-else example
    if (num > 0) {
        printf("Positive number\n");
    } else if (num < 0) {
        printf("Negative number\n");
    } else {
        printf("Zero\n");
    }

    // Prompt user for a grade
    printf("Enter a grade (A, B, C, etc.): ");
    scanf(" %c", &grade); // Note the space before %c to consume any leftover newline

    // Switch example
    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Passed\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}