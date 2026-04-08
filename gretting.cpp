#include <iostream>
using namespace std;

// Function to display greeting
void greet(string name, int age) {
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}

int main() {
    string name;
    int age;
    char choice;

    do {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your age: ";
        cin >> age;

        greet(name, age);

        if (age < 18)
            cout << "You are a minor." << endl;
        else
            cout << "You are an adult." << endl;

        cout << "\nWould you like to enter another person? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;

    return 0;
}
