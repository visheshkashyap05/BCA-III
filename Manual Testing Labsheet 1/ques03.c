#include <stdio.h>

void cashWithdrawal()
{
    float balance = 10000, amount;

    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0)
        printf("FAIL: Invalid withdrawal amount.\n");
    else if (amount > balance)
        printf("FAIL: Insufficient balance.\n");
    else
    {
        balance -= amount;
        printf("PASS: Cash withdrawal successful.\n");
        printf("Remaining Balance: %.2f\n", balance);
    }
}

void balanceInquiry()
{
    float balance = 10000;

    printf("\nCurrent Balance: %.2f\n", balance);
    printf("PASS: Balance inquiry successful.\n");
}

void changePIN()
{
    int oldPIN, newPIN;

    printf("\nEnter old PIN: ");
    scanf("%d", &oldPIN);

    printf("Enter new PIN: ");
    scanf("%d", &newPIN);

    if (newPIN < 1000 || newPIN > 9999)
        printf("FAIL: PIN must contain 4 digits.\n");
    else
        printf("PASS: PIN changed successfully.\n");
}

void miniStatement()
{
    printf("\n===== MINI STATEMENT =====\n");
    printf("Withdrawal: Rs. 2000\n");
    printf("Deposit:    Rs. 5000\n");
    printf("Withdrawal: Rs. 1000\n");
    printf("PASS: Mini statement generated.\n");
}

int main()
{
    int choice;

    printf("===== ATM TESTING SYSTEM =====\n");
    printf("1. Cash Withdrawal\n");
    printf("2. Balance Inquiry\n");
    printf("3. PIN Change\n");
    printf("4. Mini Statement\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            cashWithdrawal();
            break;

        case 2:
            balanceInquiry();
            break;

        case 3:
            changePIN();
            break;

        case 4:
            miniStatement();
            break;

        default:
            printf("FAIL: Invalid option.\n");
    }

    return 0;
}