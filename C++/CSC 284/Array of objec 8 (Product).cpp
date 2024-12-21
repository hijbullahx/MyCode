/*You have a store that sells various products, and you want to display the details of all
the products available. Create a class called "Product" with attributes for product name,
price, and quantity. Implement member functions to update the product quantity and
display the product details. Create an array of 12 Product objects and print the details
of all products along with their quantities.*/
#include<iostream>
using namespace std;
class Product
{
public:
    string name;
    float price;
    int quantity;
    void input()
    {
        cout<<"Enter The Product Name: ";
        cin>>name;
        cout<<"Enter Price: ";
        cin>>price;
        cout<<"What is the quantity: ";
        cin>>quantity;
    }
    void output()
    {
        cout<<"Product Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Quantity: "<<quantity<<endl;
    }
    void update()
    {
        cin>>quantity;
    }
};
int main()
{
    Product p[12];
    for(int i = 0; i<12; i++)
    {
        cout<<i+1<<": "<<endl;
        p[i].input();
    }
    for(int i = 0; i<12; i++)
    {
        cout<<i+1<<": "<<endl;
        p[i].output();
    }
    cout<<"Enter Updated quantity: "<<endl;
    for(int i = 0; i<12; i++)
    {
        cout<<"For Product No. "<<i+1<<": "<<endl;
        p[i].update();
    }
    cout<<"After Updating: "<<endl;
    for(int i = 0; i<12; i++)
    {
        cout<<i+1<<": "<<endl;
        p[i].output();
    }
}
