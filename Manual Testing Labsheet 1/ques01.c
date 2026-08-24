#include <stdio.h>
#include <string.h>

void checkATMSystem()
{
    int choice;
    char pin[10];

    printf("===== ATM SYSTEM TESTING =====\n");

    printf("\nEnter your PIN: ");
    scanf("%s", pin);

    if (strlen(pin) != 4)
        printf("BUG: PIN should contain exactly 4 digits.\n");
    else
        printf("PIN format accepted.\n");

    printf("\nSelect an operation:\n");
    printf("1. Cash Withdrawal\n");
    printf("2. Balance Inquiry\n");
    printf("3. PIN Change\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Testing Cash Withdrawal...\n");
            printf("Possible Bug: ATM may allow withdrawal greater than available balance.\n");
            break;

        case 2:
            printf("Testing Balance Inquiry...\n");
            printf("Possible Bug: Incorrect balance may be displayed.\n");
            break;

        case 3:
            printf("Testing PIN Change...\n");
            printf("Possible Bug: System may accept a weak or invalid PIN.\n");
            break;

        default:
            printf("BUG: Invalid menu option accepted.\n");
    }
}

int main()
{
    checkATMSystem();
    return 0;
}