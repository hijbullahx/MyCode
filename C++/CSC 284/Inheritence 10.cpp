/*Create two classes named “Mammals” and “MarineAnimals.” Create another class
called “BlueWhale,” which inherits both the above classes. Now, create a function in
each of these classes that prints "I am a mammal,” "I am a marine animal," and "I
belong to both the categories: Mammals as well as Marine Animals," respectively.
Now, create an object for each of the above classes and try calling
– a function of Mammals by the object of Mammal
– a function of MarineAnimal by the object of MarineAnimal
– a function of BlueWhale by the object of BlueWhale
– a function of each of its parents by the object of BlueWhale*/
/*Multiple Inheritence*/
#include<iostream>
using namespace std;
class Mammals
{
public:
    void print()
    {
        cout<<"I am a Mammal"<<endl;
    }
};
class MarineAnimals
{
    public:
    void print()
    {
        cout<<"I am a Marine Animals"<<endl;
    }
};
class BluWhale : public Mammals, public MarineAnimals
{
public:
    void print()
    {
        cout<<"I belong to both categories: Mammals as well as Marine Animals"<<endl;
    }
};
int main()
{
    Mammals m;
    m.print();
    cout<<endl;
    MarineAnimals n;
    n.print();
    cout<<endl;
    BluWhale b;
    b.Mammals :: print();
    b.MarineAnimals :: print();
    b.print();
    return 0;
}
