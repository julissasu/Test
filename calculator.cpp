#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
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
