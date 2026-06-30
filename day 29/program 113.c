#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    do
    {
        printf("\n----- Calculator -----");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("Enter Two Numbers: ");
            scanf("%f%f", &a, &b);
        }

        switch(choice)
        {
            case 1:
                printf("Sum = %.2f\n", a + b);
                break;

            case 2:
                printf("Difference = %.2f\n", a - b);
                break;

            case 3:
                printf("Product = %.2f\n", a * b);
                break;

            case 4:
                if(b != 0)
                    printf("Quotient = %.2f\n", a / b);
                else
                    printf("Division by Zero is not allowed.\n");
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}