#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}#include <iostream>
using namespace std;

// Functions
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

// Function to display menu
void showMenu() {
    cout << "\nSimple Calculator\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice, x, y;

    do {
        showMenu();
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> x >> y;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << add(x, y) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(x, y) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(x, y) << endl;
                break;
            case 4:
                if (y == 0)
                    cout << "Error: Cannot divide by zero!\n";
                else
                    cout << "Result: " << divide(x, y) << endl;
                break;
            case 5:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// main function
int main() {
    int choice, x, y;

    cout << "Simple Calculator\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    if (choice == 1)
        cout << "Result: " << add(x, y) << endl;
    else if (choice == 2)
        cout << "Result: " << subtract(x, y) << endl;
    else if (choice == 3)
        cout << "Result: " << multiply(x, y) << endl;
    else
        cout << "Invalid choice!" << endl;

    return 0;
}
