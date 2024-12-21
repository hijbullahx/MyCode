#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long d = n * n;

    for (long long x = 1; x * x < d; x++) {
        long long y_squared = d - x * x;
        long long y = sqrt(y_squared);

        if (y * y == y_squared) {
            cout << x << " " << y << endl;
            break; // Stop the loop after printing the first pair
        }
    }

    return 0;
}
