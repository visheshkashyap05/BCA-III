#include <iostream>
using namespace std;

int main() {
    int age;
    char smoker, condition;
    int premium;

    cout << "Enter age: ";
    cin >> age;
    cout << "Is the person a smoker? (Y/N): ";
    cin >> smoker;
    cout << "Does the person have a pre-existing condition? (Y/N): ";
    cin >> condition;

    // Assumed rates because the lab sheet specifies decisions, not rates.
    if (age < 30) {
        premium = 5000;
        if (smoker == 'Y' || smoker == 'y') {
            premium += 2000;
            if (condition == 'Y' || condition == 'y') {
                premium += 3000;
            }
        }
    }
    else {
        premium = 7000;
    }

    cout << "Insurance Premium = Rs. " << premium;
    return 0;
}
