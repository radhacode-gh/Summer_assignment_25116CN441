#include <stdio.h>

int main()
{
    int seats = 50;
    int choice, ticket;

    do
    {
        printf("\n------ Ticket Booking ------");
        printf("\n1. Book Ticket");
        printf("\n2. Available Seats");
        printf("\n3. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Tickets: ");
                scanf("%d", &ticket);

                if(ticket <= seats)
                {
                    seats -= ticket;
                    printf("Booking Successful!\n");
                    printf("Remaining Seats = %d\n", seats);
                }
                else
                {
                    printf("Seats Not Available!\n");
                }
                break;

            case 2:
                printf("Available Seats = %d\n", seats);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}