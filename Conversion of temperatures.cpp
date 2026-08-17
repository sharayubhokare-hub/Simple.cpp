#include <iostream>
using namespace std;

int main() {
    float temp, result;
    int choice;

    cout << "Temperature Conversion\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    if (choice == 1) {
        result = (temp * 1.8) + 32;
        cout << "Temperature in Fahrenheit = " << result << " F";
    }
    else if (choice == 2) {
        result = (temp - 32) * 0.56;
        cout << "Temperature in Celsius = " << result << " C";
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}