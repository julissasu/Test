#include <iostream>
#include <cmath> // for sqrt
using namespace std;

// Basic functions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    return (double)a / b;
}

// Power function
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Square root function
double squareRoot(int n) {
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
    int choice, x, y;

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
