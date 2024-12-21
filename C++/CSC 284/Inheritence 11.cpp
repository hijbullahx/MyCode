/*Make a Fruit class with a data member to calculate the number of fruits in a basket.
Create two other classes named Apples and Mangoes to calculate the number of
apples and mangoes in the basket. Print the number of fruits of each type and the total
number of fruits in the basket*/
/*Hierarchical*/
#include<iostream>
using namespace std;
class Fruit
{
public:
    int n;
    void get_num()
    {
        cin>>n;
    }
};
class Apples : public Fruit
{
public:
    void show_Apple()
    {
        cout<<"Number of Apple is: "<<n<<endl;
    }
};
class Mangoes : public Fruit
{
public:
    void show_Mango()
    {
        cout<<"Number of Mango is: "<<n<<endl;
    }
    friend void calculation(Apples a, Mangoes m);
};
void calculation(Apples a, Mangoes m)
{
    int cal;
    cal = a.n+m.n;
    cout<<"Total Fruits in the basket: "<<cal<<endl;
}

int main()
{
    Apples a;
    Mangoes m;
    cout<<"Enter Number of Apples: ";
    a.get_num();
    cout<<"Enter Number of Apples: ";
    m.get_num();
    a.show_Apple();
    m.show_Mango();
    calculation(a,m);
    return 0;
}
