#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance, account_number;

public:
    BankAccount(int x, int y)
    {
        account_number = x;
        balance = y;
    }

    int get_balance()
    {
        return balance;
    }
};

int main()
{
    int a, c;
    cout << "Enter Account Number: ";
    cin >> a;
    cout << "Enter Balance: ";
    cin >> c;

    BankAccount b(a, c);
    cout << b.get_balance();

    return 0;
}

