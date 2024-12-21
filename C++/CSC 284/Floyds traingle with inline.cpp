#include <iostream>
using namespace std;

inline void ft(int r)
{
    int n = 1;

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= i; j++) {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
}

int main() {
    int rows;

    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> rows;

    ft(rows);

}
