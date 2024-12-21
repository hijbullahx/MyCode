#include<iostream>
using namespace std;
class Animal
{
protected:
    string name;
    int age;
};
class Pet
{
protected:
    string owner_name;
};
class PetAnimal : public Animal, public Pet
{
public:
    void get()
    {
        cout<<"Name of The Animal: ";
        cin>>name;
        cout<<"Age of the Animal: ";
        cin>>age;
        cout<<"The Owner Name: ";
        cin>>owner_name;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Owner Name: "<<owner_name<<endl;
    }
};
int main()
{
    PetAnimal p;
    p.get();
    p.display();
    return 0;
}
