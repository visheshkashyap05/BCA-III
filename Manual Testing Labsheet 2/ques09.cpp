#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Negative input is not allowed";
    }
    else if (n == 0) {
        cout << "Sum of digits = 0";
    }
    else {
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        cout << "Sum of digits = " << sum;
    }
    return 0;
}
