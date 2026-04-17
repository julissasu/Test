// This is a simple calculator program
#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream> // for string formatting
using namespace std;

// Function to format number with commas
string formatNumber(double num) {
    stringstream ss;
    ss << fixed << setprecision(2) << num;
    string str = ss.str();

    int insertPosition = str.find('.') - 3;
    while (insertPosition > 0) {
        str.insert(insertPosition, ",");
        insertPosition -= 3;
    }

    return str;
}

// Basic functions
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }
double power(double base, double exp) { return pow(base, exp); }
double squareRoot(double n) { return sqrt(n); }

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
    double x, y, result;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                result = add(x, y);
                cout << "Result: " << formatNumber(result) << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                result = subtract(x, y);
                cout << "Result: " << formatNumber(result) << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                result = multiply(x, y);
                cout << "Result: " << formatNumber(result) << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> x >> y;
                if (y == 0)
                    cout << "Error: Cannot divide by zero!\n";
                else {
                    result = divide(x, y);
                    cout << "Result: " << formatNumber(result) << endl;
                }
                break;

            case 5:
                cout << "Enter base and exponent: ";
                cin >> x >> y;
                result = power(x, y);
                cout << "Result: " << formatNumber(result) << endl;
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> x;
                if (x < 0)
                    cout << "Error: Cannot take square root of negative number!\n";
                else {
                    result = squareRoot(x);
                    cout << "Result: " << formatNumber(result) << endl;
                }
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
