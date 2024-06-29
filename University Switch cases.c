#include <stdio.h>

int main() {
    int score;
    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);
    switch(score) {
        case 90 ... 100:
            printf("Grade: A\n");
            break;
        case 80 ... 89:
            printf("Grade: B\n");
            break;
        case 70 ... 79:
            printf("Grade: C\n");
            break;
        case 60 ... 69:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }
    return 0;
}
