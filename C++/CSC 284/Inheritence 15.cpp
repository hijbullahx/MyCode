/*All the banks operating in India are controlled by RBI. RBI has set well-defined
guidelines (e.g., minimum interest rate, minimum balance allowed, maximum
withdrawal limit, etc.), which all banks must follow. For example, suppose RBI has
set the minimum interest rate applicable to a saving bank account to be 4% annually;
however, banks are free to use a 4% interest rate or to set any rates above it.
Write a program to implement bank functionality in the above scenario.
Note: Create a few classes, namely Customer, Account, RBI (Base Class), and a few
derived classes (SBI, ICICI, PNB, etc.). Assume and implement required member
variables and functions in each class.*/
#include<iostream>
using namespace std;
class RBI
{
protected:
    float min_irate=4, min_balance=1000, max_wlimit=10000;
};
class Customer
{
protected:
    string name;
};
class Account
{
protected:
    string account_number;
};
class SBI : public RBI, public Customer, public Account
{
public:
    void get()
    {
        cout<<"Customer Name Please: ";
        cin>>name;
        cout<<"Account Number? ";
        cin>>account_number;
    }
    void give()
    {
        cout<<"Customer Name: "<<name<<endl;
        cout<<"Account Number? "<<account_number<<endl;
        cout<<"Minimum Interest Rate: "<<min_irate<<"%"<<endl;
        cout<<"Minimum Balance :"<<min_balance<<endl;
        cout<<"Maximum Withdraw Limit: "<<max_wlimit<<endl;
    }
};
class ICICI : public RBI, public Customer, public Account
{
public:
    void get()
    {
        cout<<"Customer Name Please: ";
        cin>>name;
        cout<<"Account Number? ";
        cin>>account_number;
    }
    void give()
    {
        cout<<"Customer Name: "<<name<<endl;
        cout<<"Account Number? "<<account_number<<endl;
        cout<<"Minimum Interest Rate: "<<min_irate<<"%"<<endl;
        cout<<"Minimum Balance: "<<min_balance<<endl;
        cout<<"Maximum Withdraw Limit: "<<max_wlimit<<endl;
    }
};
class PNB : public RBI, public Customer, public Account
{
public:
    void get()
    {
        cout<<"Customer Name Please: ";
        cin>>name;
        cout<<"Account Number? ";
        cin>>account_number;
    }
    void give()
    {
        cout<<"Customer Name: "<<name<<endl;
        cout<<"Account Number? "<<account_number<<endl;
        cout<<"Minimum Interest Rate: "<<min_irate<<"%"<<endl;
        cout<<"Minimum Balance: "<<min_balance<<endl;
        cout<<"Maximum Withdraw Limit: "<<max_wlimit<<endl;
    }
};
int main()
{
    SBI s;
    cout<<"For SBI Bank: "<<endl;
    s.get();
    s.give();
    ICICI i;
    cout<<"For SBI Bank: "<<endl;
    i.get();
    i.give();
    PNB p;
    cout<<"For SBI Bank: "<<endl;
    p.get();
    p.give();
    return 0;
}
