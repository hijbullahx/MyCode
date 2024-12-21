#include<iostream>
using namespace std;
class Account
{
public:
    int account_number = 123456;
    string account_holder_name="John Doe";
    float initial_balance=1000, deposit=500, withdrawal = 200;

    void account()
    {
        cout<<"Account Number= "<<account_number<<endl;
        cout<<"Account Holder Name= "<<account_holder_name<<endl;
        cout<<"Initial Balance= "<<initial_balance<<endl;
        cout<<"Deposited Ammount= "<<deposit<<endl;
        cout<<"Withdrawal Ammount= "<<withdrawal<<endl;
    }
    void after_deposit()
    {
        initial_balance = initial_balance+deposit;
        cout<<"After Deposit Total Balance is: "<<initial_balance<<endl;

    }
    void after_withdrawal()
    {
        initial_balance = initial_balance - withdrawal;
        cout<<"After Withdrawal Current Balance is: "<< initial_balance<<endl;
    }


};
int main()
{
    Account h;
    h.account();
    h.after_deposit();
    h.after_withdrawal();
}
