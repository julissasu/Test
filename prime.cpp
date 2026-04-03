#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Function to print result for a single number
void printResult(int n) {
    if (isPrime(n))
        cout << n << " is a prime number.\n";
    else
        cout << n << " is not a prime number.\n";
}

// NEW function: list all primes up to n
void listPrimes(int n) {
    cout << "Prime numbers up to " << n << ":\n";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int num;
    char choice;

    do {
        cout << "Enter a number: ";
        cin >> num;

        printResult(num);
        listPrimes(num);  // calling the new function

        cout << "Check another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!\n";
    return 0;
}
