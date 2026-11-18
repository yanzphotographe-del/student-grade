#include <stdio.h>

int main() {
    int Grade;
    char choice;

    do {
        printf("Enter your grade: ");
        scanf("%d", &Grade);

        if (Grade < 0 || Grade > 100) {
            printf("Invalid Grade");
        }
        else if (Grade >= 94 && Grade <= 100) {
            printf("Excellent\n");
        }
        else if (Grade >= 88 && Grade <= 93) {
            printf("Very Good\n");
        }
        else if (Grade >= 82 && Grade <= 87) {
            printf("Good\n");
        }
        else if (Grade >= 76 && Grade <= 81) {
            printf("Satisfactory\n");
        }
        else if (Grade >= 75) {
            printf("Passed\n");
        }
        else {
            printf("Failed");
        }
        printf("\nInput another grade? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("Program Ended.\n");

    return 0;
}