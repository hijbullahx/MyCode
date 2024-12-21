#include<iostream>
using namespace std;
void fibo(int s, int* a, int* b)
        {
            for (int i = 1; i <= s; i++)
                {
                    int sum = *a + *b;
                    //cout << sum << " ";
                    *a = *b;
                    *b = sum;
                }
        }
int main() {
    int s;
    cout << "Enter the number of terms: ";
    cin >> s;
    int first = 0;
    int second = 1;
    cout << "Fibonacci Series: ";
    fibo(s, &first, &second);
    cout<<&sum;
    return 0;
}
