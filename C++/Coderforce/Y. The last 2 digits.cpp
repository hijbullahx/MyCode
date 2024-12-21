#include<iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    int l1, l2;
    cin >> A >> B >> C >> D;

    // Compute the last two digits of the multiplication
    int last_two_digits = (((A % 100) * (B % 100)) % 100 * ((C % 100) * (D % 100)) % 100) % 100;

    // Extract the individual digits
    l1 = last_two_digits % 10;
    l2 = (last_two_digits / 10) % 10;

    // Output the result
    cout << l2 << l1;

    return 0;
}
