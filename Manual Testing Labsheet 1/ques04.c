#include <stdio.h>
#include <string.h>

void loginTest()
{
    char username[30];
    char password[30];

    printf("===== LOGIN SYSTEM TESTING =====\n");

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    printf("\n===== TEST RESULTS =====\n");

    if (strlen(username) == 0)
        printf("TC01: Blank username - FAIL\n");
    else
        printf("TC01: Username field - PASS\n");

    if (strlen(password) == 0)
        printf("TC02: Blank password - FAIL\n");
    else
        printf("TC02: Password field - PASS\n");

    if (strcmp(username, "admin") == 0)
        printf("TC03: Valid username - PASS\n");
    else
        printf("TC03: Invalid username - FAIL\n");

    if (strcmp(password, "admin123") == 0)
        printf("TC04: Valid password - PASS\n");
    else
        printf("TC04: Invalid password - FAIL\n");

    if (strlen(password) >= 8)
        printf("TC05: Password security - PASS\n");
    else
        printf("TC05: Password security - FAIL\n");
}

int main()
{
    loginTest();
    return 0;
}