#include <iostream>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(string number, string holderName, double initialBalance) {
        accountNumber = number;
        accountHolderName = holderName;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }

    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    string n;
    cout<<"Enter Account Number: ";
    cin>>n;
    string name;
    cout<<"Enter Account Holder Name ";
    cin>>name;
    float balance;
    cout<<"Enter Balance: ";
    cin>>balance;
    BankAccount account(n, name, balance);
    float d;
    cout<<"Enter Deposit Amount: ";
    cin>>d;
    account.deposit(d);
    account.displayBalance();

    return 0;
}

