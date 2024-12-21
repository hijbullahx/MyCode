/*Let’s create a bank account. Create a class named 'BankAccount' with the following
data members
1 - Name of depositor
2 - Address of depositor
3 - Type of account
4 - Balance in the account
5 - Number of transactions
The Class 'BankAccount' has a function for each of the following
1 - Generate a unique account number for each depositor
For the first depositor, the account number will be BA1000; for the second depositor,
it will be BA1001, and so on
2 - Display information and balance of depositor
3 - Deposit more amount in the balance of any depositor
4 - Withdraw some amount from the balance deposited
5 - Change the address of the depositor
After creating the class, do the following operations
1 - Enter the information (name, address, type of account, balance) of the depositors’
to be entered by the user.
2 - Print the information of any depositor.
3 - Add some amount to the account of any depositor and then display the final
information of that depositor
4 - Remove some amount from the account of any depositor and then display the final
information of that depositor
5 - Change the address of any depositor and then display the final information of that
depositor
6 - Randomly repeat these processes for some other bank accounts and after that, print
the total number of transactions.*/
#include<iostream>
using namespace std;
class Bank_Account
{
public:
    string name, address, type;
    float balance;
    int n_t;
    void i_info()
    {
        cout<<"Input Name of the Depositor: ";
        cin>>name;
        cout<<"Input Adress: ";
        cin>>address;
        cout<<"What type is this account is? ";
        cin>>type;
        cout<<"Enter Balance in the Account: ";
        cin>>balance;
        cout<<"How many Transactions he has done? ";
        cin>>n_t;


    }
    void o_info()
    {
        cout<<"Depositor Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Account Type: "<<type<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Transactions: "<<n_t<<endl;
    }
    void add(float n_amount)
    {
        balance += n_amount;

    }
    void remove_amount(float r_a)
    {
        balance -= r_a;
    }
    void change_address(string n_add)
    {
        address = n_add;
    }
};
int main()
{
    Bank_Account b[2];
    int k,ba;
    char y,Y,n,N;
    cout<<"\t\tBanks: "<<endl;
    cout<<"Press 1 for Enter in ABC Bank "<<endl;
    cout<<"Press 2 for Enter in SB Bank "<<endl;
    cout<<"Press 3 for Enter in DBL Bank "<<endl;
    cin>>ba;
    if(ba == 1 || ba == 2 || ba == 3)
    {
        if (ba == 1 || ba ==2)
        {
           if(ba == 1)
           {
                cout<<"You have selected ABC Bank"<<endl;
                int a;
                cout<<"Enter Details of the Depositiores "<<endl;
                for(int i=0; i<2; i++)
                    {
                        cout<<i+1<<": "<<endl;
                        cout<<"Account Number BA"<<i+1000<<": "<<endl;
                        b[i].i_info();
                    }
                    cout<<"\t\tMain Manu: "<<endl;
                    cout<<"Select an Option: "<<endl;
                cout<<"Press 1 For Search any Depositor Account and then display the final information of that depositor."<<endl;
                cout<<"Press 2 For Add some amount to the account of any depositor and then display the final information of that depositor."<<endl;
                cout<<"Press 3 Remove some amount from the account of any depositor and then display the final information of that depositor."<<endl;
                cout<<"Press 4 For Change the address of any depositor and then display the final information of that depositor."<<endl;
                cin>>a;
                cout<<endl;
                if(a == 1 || a==2 || a == 3 || a == 4)
                {
                    if(a == 1 || a==2 || a == 3 )
                    {
                        if(a == 1 || a==2 )
                        {
                            if(a == 1)
                            {
                                cout<<"Enter last four digits of Bank Account Number: "<<endl;
                                    cin>>k;
                                    bool found = false;
                                    for(int i = 0; i<2; i++)
                                    {
                                       if(k==i+1000)
                                    {
                                        b[i].o_info();
                                        found = true;
                                        break;
                                    }

                                    }

                            }
                            else
                            {
                                cout<<"Enter last four digits of Bank Account Number in which you want to deposit: "<<endl;
                                cin>>k;
                                bool f = false;
                                for(int i = 0; i<2; i++)
                                {
                                   if(k==i+1000)
                                {
                                    float amount;
                                    cout<<"Enter amount to deposite: ";
                                    cin>>amount;
                                    b[i].add(amount);
                                    b[i].o_info();
                                    f = true;
                                    break;
                                }




                            }

                        }

                    }
                    else
                        {
                            cout<<"Enter last four digits of Bank Account Number in which you want to Withdraw: "<<endl;
                            cin>>k;
                            bool r = false;
                            for(int i = 0; i<2; i++)
                            {
                               if(k==i+1000)
                            {
                                float Remove;
                                cout<<"Enter amount to withdraw: ";
                                cin>>Remove;
                                b[i].remove_amount(Remove);
                                b[i].o_info();
                                r = true;
                                break;
                            }



                            }
                        }

                }
                else
                    {
                      cout<<"Enter last four digits of Bank Account Number in which you want to Change Address: "<<endl;
                      cin>>k;
                      bool a = false;
                      for(int i = 0; i<2; i++)
                    {
                        if(k==i+1000)
                            {
                                string addr;
                                cout<<"Enter New Address: ";
                                cin>>addr;
                                b[i].change_address(addr);
                                b[i].o_info();
                                a = true;
                                break;
                            }

                            }
                    }

        }
        else
                {
                    cout<<"Wrong Selection!"<<endl;
                }

        }
         else
           {
              cout<<"\t\tYou have selected SB Bank"<<endl;
               int a;
                cout<<"Enter Details of the Depositiores "<<endl;
                for(int i=0; i<2; i++)
                    {
                        cout<<i+1<<": "<<endl;
                        cout<<"Account Number BA"<<i+1000<<": "<<endl;
                        b[i].i_info();
                    }
                    cout<<"\t\tMain Manu: "<<endl;
                    cout<<"Select an Option: "<<endl;
                cout<<"Press 1 For Search any Depositor Account and then display the final information of that depositor."<<endl;
                cout<<"Press 2 For Add some amount to the account of any depositor and then display the final information of that depositor."<<endl;
                cout<<"Press 3 Remove some amount from the account of any depositor and then display the final information of that depositor."<<endl;
                cout<<"Press 4 For Change the address of any depositor and then display the final information of that depositor."<<endl;
                cin>>a;
                cout<<endl;
                if(a == 1 || a==2 || a == 3 || a == 4)
                {
                    if(a == 1 || a==2 || a == 3 )
                    {
                        if(a == 1 || a==2 )
                        {
                            if(a == 1)
                            {
                                cout<<"Enter last four digits of Bank Account Number: "<<endl;
                                    cin>>k;
                                    bool found = false;
                                    for(int i = 0; i<2; i++)
                                    {
                                       if(k==i+1000)
                                    {
                                        b[i].o_info();
                                        found = true;
                                        break;
                                    }

                                    }

                            }
                            else
                            {
                                cout<<"Enter last four digits of Bank Account Number in which you want to deposit: "<<endl;
                                cin>>k;
                                bool f = false;
                                for(int i = 0; i<2; i++)
                                {
                                   if(k==i+1000)
                                {
                                    float amount;
                                    cout<<"Enter amount to deposite: ";
                                    cin>>amount;
                                    b[i].add(amount);
                                    b[i].o_info();
                                    f = true;
                                    break;
                                }




                            }

                        }

                    }
                    else
                        {
                            cout<<"Enter last four digits of Bank Account Number in which you want to Withdraw: "<<endl;
                            cin>>k;
                            bool r = false;
                            for(int i = 0; i<2; i++)
                            {
                               if(k==i+1000)
                            {
                                float Remove;
                                cout<<"Enter amount to withdraw: ";
                                cin>>Remove;
                                b[i].remove_amount(Remove);
                                b[i].o_info();
                                r = true;
                                break;
                            }



                            }
                        }

                }
                else
                    {
                      cout<<"Enter last four digits of Bank Account Number in which you want to Change Address: "<<endl;
                      cin>>k;
                      bool a = false;
                      for(int i = 0; i<2; i++)
                    {
                        if(k==i+1000)
                            {
                                string addr;
                                cout<<"Enter New Address: ";
                                cin>>addr;
                                b[i].change_address(addr);
                                b[i].o_info();
                                a = true;
                                break;
                            }

                            }
                    }
           }
    }
        }
    else
        {
            cout<<"\t\tYou have selected DBL Bank"<<endl;
             int a;
                cout<<"Enter Details of the Depositiores "<<endl;
                for(int i=0; i<2; i++)
                    {
                        cout<<i+1<<": "<<endl;
                        cout<<"Account Number BA"<<i+1000<<": "<<endl;
                        b[i].i_info();
                    }
                    cout<<"\t\tMain Manu: "<<endl;
                    cout<<"Select an Option: "<<endl;
                cout<<"Press 1 For Search any Depositor Account and then display the final information of that depositor."<<endl;
                cout<<"Press 2 For Add some amount to the account of any depositor and then display the final information of that depositor."<<endl;
                cout<<"Press 3 Remove some amount from the account of any depositor and then display the final information of that depositor."<<endl;
                cout<<"Press 4 For Change the address of any depositor and then display the final information of that depositor."<<endl;
                cin>>a;
                cout<<endl;
                if(a == 1 || a==2 || a == 3 || a == 4)
                {
                    if(a == 1 || a==2 || a == 3 )
                    {
                        if(a == 1 || a==2 )
                        {
                            if(a == 1)
                            {
                                cout<<"Enter last four digits of Bank Account Number: "<<endl;
                                    cin>>k;
                                    bool found = false;
                                    for(int i = 0; i<2; i++)
                                    {
                                       if(k==i+1000)
                                    {
                                        b[i].o_info();
                                        found = true;
                                        break;
                                    }

                                    }

                            }
                            else
                            {
                                cout<<"Enter last four digits of Bank Account Number in which you want to deposit: "<<endl;
                                cin>>k;
                                bool f = false;
                                for(int i = 0; i<2; i++)
                                {
                                   if(k==i+1000)
                                {
                                    float amount;
                                    cout<<"Enter amount to deposite: ";
                                    cin>>amount;
                                    b[i].add(amount);
                                    b[i].o_info();
                                    f = true;
                                    break;
                                }




                            }

                        }

                    }
                    else
                        {
                            cout<<"Enter last four digits of Bank Account Number in which you want to Withdraw: "<<endl;
                            cin>>k;
                            bool r = false;
                            for(int i = 0; i<2; i++)
                            {
                               if(k==i+1000)
                            {
                                float Remove;
                                cout<<"Enter amount to withdraw: ";
                                cin>>Remove;
                                b[i].remove_amount(Remove);
                                b[i].o_info();
                                r = true;
                                break;
                            }



                            }
                        }

                }
                else
                    {
                      cout<<"Enter last four digits of Bank Account Number in which you want to Change Address: "<<endl;
                      cin>>k;
                      bool a = false;
                      for(int i = 0; i<2; i++)
                    {
                        if(k==i+1000)
                            {
                                string addr;
                                cout<<"Enter New Address: ";
                                cin>>addr;
                                b[i].change_address(addr);
                                b[i].o_info();
                                a = true;
                                break;
                            }

                            }
                    }
        }
}
    }

        else
    {
        cout<<"Wrong Selection!"<<endl;
    }

}
