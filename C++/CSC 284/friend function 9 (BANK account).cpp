/*Define a class BankAccount with private members for account balance
and account number. Write a friend function that takes a BankAccount
object as a parameter and returns the account balance.*/
#include<iostream>
using namespace std;
class BankAccount
{
    int balance, account_number;
public:
    BankAccount(int x, int y)
    {
        account_number = x;
        balance = y;
    }
    friend int display(BankAccount b);
};
int display(BankAccount b)
{
    return b.balance;
}
int main()
{
    int a,c;
    cout<<"Enter Account Number: ";
    cin>>a;
    cout<<"Enter Balance: ";
    cin>>c;
    BankAccount b(a,c);
    cout<<display(b);
}




