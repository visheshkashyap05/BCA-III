#include <stdio.h>
#include <string.h>

void attendanceTesting()
{
    int choice;
    char username[30];

    printf("===== EMPLOYEE ATTENDANCE SYSTEM =====\n");

    printf("\nEnter employee username: ");
    scanf("%s", username);

    printf("\nSelect Test:\n");
    printf("1. Login\n");
    printf("2. Attendance Marking\n");
    printf("3. Leave Management\n");
    printf("4. Report Generation\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("\nLogin Test\n");
            printf("Possible Bug: Invalid users may be allowed to log in.\n");
            break;

        case 2:
            printf("\nAttendance Marking Test\n");
            printf("Possible Bug: Employee may be able to mark attendance multiple times.\n");
            break;

        case 3:
            printf("\nLeave Management Test\n");
            printf("Possible Bug: Leave may be approved even when balance is insufficient.\n");
            break;

        case 4:
            printf("\nReport Generation Test\n");
            printf("Possible Bug: Attendance report may show incorrect working days.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }
}

int main()
{
    attendanceTesting();
    return 0;
}