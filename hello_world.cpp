#include <iostream>
#include <cstdlib> // for rand()
#include <ctime>   // for time()
using namespace std;

// Random number function
int getRandomNumber() {
    return rand() % 100 + 1; // 1–100
}

int main() {
    int a = 5, b = 3;
    int sum = a + b;

    // Seed random generator
    srand(time(0));

    cout << "Hello, World!" << endl;
    cout << "Sum of " << a << " and " << b << " is " << sum << endl;

    // Use random function
    cout << "Random number: " << getRandomNumber() << endl;

    return 0;
}