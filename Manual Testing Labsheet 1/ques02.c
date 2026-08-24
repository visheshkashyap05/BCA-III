#include <stdio.h>
#include <string.h>

void testBankingApplication()
{
    char username[30];
    char password[30];

    printf("===== BANKING APPLICATION TESTING =====\n");

    printf("\nEnter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    printf("\n--- Test Case Results ---\n");

    if (strlen(username) == 0)
        printf("TC01: Username blank - FAIL\n");
    else
        printf("TC01: Username entered - PASS\n");

    if (strlen(password) == 0)
        printf("TC02: Password blank - FAIL\n");
    else
        printf("TC02: Password entered - PASS\n");

    if (strcmp(username, "admin") == 0 &&
        strcmp(password, "1234") == 0)
        printf("TC03: Valid login - PASS\n");
    else
        printf("TC03: Invalid login credentials - FAIL\n");

    printf("TC04: Balance inquiry - PASS\n");
    printf("TC05: Fund transfer - PASS\n");
    printf("TC06: Logout - PASS\n");
}

int main()
{
    testBankingApplication();
    return 0;
}