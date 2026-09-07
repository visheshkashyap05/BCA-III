#include <iostream>
using namespace std;

int main() {
    float attendance;
    int marks;
    cout << "Enter attendance percentage: ";
    cin >> attendance;
    cout << "Enter marks: ";
    cin >> marks;

    if (attendance >= 75) {
        if (marks >= 40) cout << "Eligible for Exam";
        else cout << "Not Eligible: Minimum marks not achieved";
    }
    else cout << "Not Eligible: Attendance is less than 75%";
    return 0;
}
