#include <iostream>
#include <cmath>
#include <iomanip> // for formatting
using namespace std;

// Basic functions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

// Power function
double power(double base, double exp) {
    return pow(base, exp);
}

// Square root function
double squareRoot(double n) {
    return sqrt(n);
}

// Menu
void showMenu() {
    cout << "\nSimple Calculator\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Power\n";
    cout << "6. Square Root\n";
    cout << "7. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double x, y;

    // Set output to 2 decimal places
    cout << fixed << setprecision(2);

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                cout << "Result: " << add(x, y) << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                cout << "Result: " << subtract(x, y) << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                cout << "Result: " << multiply(x, y) << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                if (y == 0)
                    cout << "Error: Cannot divide by zero!\n";
                else
                    cout << "Result: " << divide(x, y) << endl;
                break;

            case 5:
                cout << "Enter base and exponent: ";
                cin >> x >> y;
                cout << "Result: " << power(x, y) << endl;
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> x;
                if (x < 0)
                    cout << "Error: Cannot take square root of negative number!\n";
                else
                    cout << "Result: " << squareRoot(x) << endl;
                break;

            case 7:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}
