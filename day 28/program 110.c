#include <stdio.h>

int main()
{
    int accNo;
    char name[50];
    float balance, amount;
    int choice;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    do
    {
        printf("\n------ Bank Menu ------");
        printf("\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Balance");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Updated Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Updated Balance = %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("Account No : %d\n", accNo);
                printf("Name : %s\n", name);
                printf("Balance : %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}