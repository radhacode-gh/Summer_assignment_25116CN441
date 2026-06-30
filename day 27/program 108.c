#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    do {
        printf("\n===== BANK MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Current Balance = %.2f\n", a.balance);
                break;

            case 2:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                a.balance += amount;
                printf("Amount Deposited Successfully.\n");
                break;

            case 3:
                printf("Enter Withdrawal Amount: ");
                scanf("%f", &amount);

                if(amount <= a.balance) {
                    a.balance -= amount;
                    printf("Amount Withdrawn Successfully.\n");
                } else {
                    printf("Insufficient Balance.\n");
                }
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