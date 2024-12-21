/*Create a class named BankAccount with a data member to store the account balance.
Create another class named SavingsAccount that inherits from the BankAccount class
and has a data member to store the interest rate of the account. Write a program to
create a SavingsAccount object and print out its account balance and interest rate.
*/
#include<iostream>
using namespace std;
class BankAccount
{
protected:
    float a_balance;
};
class SavingAccount : public BankAccount
{
    float i_rate;
public:
    void input()
    {
        cout<<"Enter Account Balance: ";
        cin>>a_balance;
        cout<<"Enter interest rate: ";
        cin>>i_rate;
    }
    void display()
    {
        cout<<"Account Balance: "<<a_balance<<endl;
        cout<<"Interest Rate: "<<i_rate<<"%"<<endl;
    }
};
int main()
{
    SavingAccount s;
    s.input();
    s.display();
    return 0;
}

