#include <iostream>
using namespace std;

int main() {
    double num, sum = 0;
    int count = 0;

    do {
        cout << "Enter a number (-1 to stop): ";
        cin >> num;
        if (num == -1) break;
        if (num < 0) {
            cout << "Invalid negative number. Try again.\n";
            continue;
        }
        sum += num;
        count++;
    } while (true);

    if (count == 0) cout << "No valid numbers entered.";
    else cout << "Average = " << sum / count;
    return 0;
}
