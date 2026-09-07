#include <iostream>
using namespace std;

int main() {
    int age;
    char guarantor;
    cout << "Enter age: ";
    cin >> age;
    cout << "Has guarantor? (Y/N): ";
    cin >> guarantor;

    bool hasGuarantor = (guarantor == 'Y' || guarantor == 'y');

    if ((age >= 21 && age <= 60) || hasGuarantor)
        cout << "Loan Eligible";
    else
        cout << "Loan Not Eligible";
    return 0;
}
