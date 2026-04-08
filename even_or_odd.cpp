#include <iostream>
using namespace std;

// Function to check even or odd
bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int num;
    char choice;
    int evenCount = 0, oddCount = 0;

    do {
        cout << "Enter a number: ";
        cin >> num;

        if (isEven(num)) {
            cout << num << " is even." << endl;
            evenCount++;
        } else {
            cout << num << " is odd." << endl;
            oddCount++;
        }

        cout << "Check another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nSummary:\n";
    cout << "Even numbers entered: " << evenCount << endl;
    cout << "Odd numbers entered: " << oddCount << endl;

    return 0;
}
