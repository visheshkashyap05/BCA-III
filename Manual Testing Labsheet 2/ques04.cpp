#include <iostream>
using namespace std;

int main() {
    int signal;
    cout << "Enter traffic light code (1=Red, 2=Yellow, 3=Green): ";
    cin >> signal;

    switch (signal) {
        case 1: cout << "STOP"; break;
        case 2: cout << "READY"; break;
        case 3: cout << "GO"; break;
        default: cout << "Invalid Traffic Light";
    }
    return 0;
}
