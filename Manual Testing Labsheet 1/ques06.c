#include <stdio.h>

void mobileBankingTesting()
{
    int choice;
    float balance = 15000;
    float amount;

    printf("===== MOBILE BANKING TESTING =====\n");

    printf("\n1. Login\n");
    printf("2. Fund Transfer\n");
    printf("3. Balance Checking\n");
    printf("4. Bill Payment\n");
    printf("5. Logout\n");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Login Test: PASS\n");
            break;

        case 2:
            printf("Enter transfer amount: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= balance)
                printf("Fund Transfer Test: PASS\n");
            else
                printf("Fund Transfer Test: FAIL\n");
            break;

        case 3:
            printf("Current Balance: Rs. %.2f\n", balance);
            printf("Balance Checking Test: PASS\n");
            break;

        case 4:
            printf("Bill Payment Test: PASS\n");
            break;

        case 5:
            printf("Logout Test: PASS\n");
            break;

        default:
            printf("Invalid choice.\n");
    }
}

int main()
{
    mobileBankingTesting();
    return 0;
}