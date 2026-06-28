#include <stdio.h>

int main()
{
    int seats = 10;
    int choice, ticket;

    while (1)
    {
        printf("\n--- Ticket Booking System ---\n");
        printf("Available Seats = %d\n", seats);
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Number of Tickets: ");
            scanf("%d", &ticket);

            if (ticket <= seats)
            {
                seats -= ticket;
                printf("Booking Successful!\n");
            }
            else
            {
                printf("Not Enough Seats.\n");
            }
            break;

        case 2:
            printf("Enter Tickets to Cancel: ");
            scanf("%d", &ticket);

            seats += ticket;

            if (seats > 10)
                seats = 10;

            printf("Cancellation Successful.\n");
            break;

        case 3:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}