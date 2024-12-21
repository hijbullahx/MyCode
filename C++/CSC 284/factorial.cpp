#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    cout << "Factorials of numbers from 1 to 10:" << endl;

    int n;
    cin>>n;
        int result = factorial(n);
        cout << "Factorial of " << n << " is " << result << endl;
    }



