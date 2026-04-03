#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {  // more efficient
        if (n % i == 0)
            return false;
    }

    return true;
}

// Function to print result
void printResult(int n) {
    if (isPrime(n))
        cout << n << " is a prime number.\n";
    else
        cout << n << " is not a prime number.\n";
}

int main() {
    int num;
    char choice;

    do {
        cout << "Enter a number: ";
        cin >> num;

        printResult(num);

        cout << "Check another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!\n";
    return 0;
}
