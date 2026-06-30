#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Simple Quiz =====\n");

    printf("\nQ1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n4. Chennai\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\nQ2. C Language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\nQ3. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 13\n4. 14\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\nYour Final Score = %d/3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}