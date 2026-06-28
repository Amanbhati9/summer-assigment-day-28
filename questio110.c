#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account a;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    while (1)
    {
        printf("\n--- Bank Menu ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Amount: ");
            scanf("%f", &amount);
            a.balance += amount;
            printf("Amount Deposited Successfully.\n");
            break;

        case 2:
            printf("Enter Amount: ");
            scanf("%f", &amount);

            if (amount <= a.balance)
            {
                a.balance -= amount;
                printf("Withdrawal Successful.\n");
            }
            else
            {
                printf("Insufficient Balance.\n");
            }
            break;

        case 3:
            printf("Balance = %.2f\n", a.balance);
            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }
}