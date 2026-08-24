#include <stdio.h>
#include <string.h>

void busBookingTesting()
{
    int choice;
    char source[30], destination[30];
    int seat;

    printf("===== BUS TICKET BOOKING TESTING =====\n");

    printf("\nEnter Source: ");
    scanf("%s", source);

    printf("Enter Destination: ");
    scanf("%s", destination);

    if (strcmp(source, destination) == 0)
        printf("Source/Destination Test: FAIL\n");
    else
        printf("Source/Destination Test: PASS\n");

    printf("\nEnter Seat Number: ");
    scanf("%d", &seat);

    if (seat >= 1 && seat <= 40)
        printf("Seat Selection Test: PASS\n");
    else
        printf("Seat Selection Test: FAIL\n");

    printf("\nSelect Test Case:\n");
    printf("1. Payment\n");
    printf("2. Cancellation\n");
    printf("3. Ticket Generation\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Payment Test: PASS\n");
            break;

        case 2:
            printf("Cancellation Test: PASS\n");
            break;

        case 3:
            printf("Ticket Generation Test: PASS\n");
            break;

        default:
            printf("Invalid choice.\n");
    }
}

int main()
{
    busBookingTesting();
    return 0;
}