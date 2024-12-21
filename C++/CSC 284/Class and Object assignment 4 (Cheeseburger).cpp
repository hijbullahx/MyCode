#include<iostream>
using namespace std;
class MenuItem
{
public:
    string name="Cheeseburger", description="Juicy beef patty with melted cheese.";
    float price=10.99;
    void display()
    {
        cout<<"\t\tHere is the manue"<<endl;
        cout<<"Item name:"<<endl;
        cout<<endl;
        cout<<name<<endl;
        cout<<"Description: "<<description<<endl;
        cout<<endl;
        cout<<"Price: "<<price<<endl;
    }

};
int main()
{
    MenuItem h;
    h.display();
}
