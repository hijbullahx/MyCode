#include<iostream>
using namespace std;
class Customer
{
public:
    string name;
    string order[10];
    int n;
    void customer_details_input()
    {
            cin>>name;
            cout<<"How many orders do he have? ";
            cin>>n;
            for(int j =0; j<n; j++)
            {
                cout<<"Enter "<<j+1<<" No. Order:";
                cin>>order[j];
            }
        }
    void customer_details_output()
    {
            cout<<"Name: "<<name<<endl;
            cout<<"Orders: "<<endl;
            for(int k =0; k<n; k++)
            {
                if(order[k] != "")
            {
                cout<<k+1<<" No. Order:";
                cout<<order[k]<<endl;
            }
            }
            cout<<endl;
    }
};
int main()
{
    Customer o[7];
    for(int i =0; i<7; i++)
    {
    cout<<"Enter the "<<i+1<<" No. Customer Name: ";
     o[i].customer_details_input();
    }
    cout<<"Here is the customer details along with their orders: "<<endl;
    for(int i=0; i<7; i++)
    {
        cout<<i+1<<" No. Customer Details: "<<endl;
        o[i].customer_details_output();
    }
}
