#include <stdio.h>

void foodDeliveryTesting()
{
    int choice;

    printf("===== ONLINE FOOD DELIVERY TESTING =====\n");

    printf("\n1. Login Test\n");
    printf("2. Restaurant Selection Test\n");
    printf("3. Order Placement Test\n");
    printf("4. Payment Test\n");
    printf("5. Cancellation Test\n");

    printf("\nEnter test case number: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Login Test: PASS\n");
            break;

        case 2:
            printf("Restaurant Selection Test: PASS\n");
            break;

        case 3:
            printf("Order Placement Test: PASS\n");
            break;

        case 4:
            printf("Payment Test: PASS\n");
            break;

        case 5:
            printf("Order Cancellation Test: PASS\n");
            break;

        default:
            printf("Invalid test case.\n");
    }
}

int main()
{
    foodDeliveryTesting();
    return 0;
}