#include<iostream>
using namespace std;
class Event
{
public:
    string name= "Birthday Party", date="2023-08-15", location="Park Plaza";
    void display()
    {
        cout<<"Event Name: "<<name<<endl;
        cout<<"Date: "<< date<<endl;
        cout<<"Location: "<<location<<endl;

    }
};
int main()
{
    Event b;
    cout<<"\t\tEvent Details: "<<endl;
    b.display();
}
