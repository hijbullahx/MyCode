#include<iostream>
using namespace std;
class Animal
{
public:
    virtual void show()
    {
        cout<<"All animal eats! "<<endl;
    }
};
class Cow : public Animal
{
public:
    void show()
    {
        cout<<"Cow's eats grass! "<<endl;
    }
};
class Tiger : public Animal
{
public:
    void show()
    {
        cout<<"Tiger eats meat! "<<endl;
    }
};
int main()
{
    Animal *a;
    Animal b;
    a = &b;
    a->show();
    Cow c;
    Tiger t;
    a = &t;
    a->show();
    a = &c;
    a->show();
    return 0;
}
