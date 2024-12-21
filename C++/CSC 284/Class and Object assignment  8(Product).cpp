#include<iostream>
using namespace std;
class Product
{
public:
    string ID="P001", name= "Smartphone";
    float price=499.99;
    int quantity=10;
    void details()
    {

        cout<<"ID: "<<ID<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Quantity: "<<quantity<<endl;

    }
    void update()
    {
        quantity = 5;
    }
} ;
int main()
{
    cout<<"\tBefore updating product details: "<<endl;
    Product j;
    j.details();
    cout<<"\tAfter updating product details:"<<endl;
    j.update();
    j.details();

}
