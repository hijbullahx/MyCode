#include<iostream>
using namespace std;

int& findMax(int& num1, int& num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a = 10;
    int b = 5;

    int& maxRef = findMax(a, b);
    cout << "The maximum value is: " << maxRef << endl;

    // Updating the reference will modify the original value
    maxRef = 15;
    cout << "The updated value of 'a' is: " << a <<endl;

    return 0;
}


