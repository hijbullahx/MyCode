/*There's a magical "Tree" class that grows older as time passes. Overload the unary operator
++ to represent the tree's age increment. When the operator is used, the tree's age should
increase by one year.*/
#include<iostream>
using namespace std;
class Tree
{
public:
    int age;
    void get_age()
    {
        cout<<"Enter Tree's age: ";
        cin>>age;
    }
    void operator ++()
    {
        cout<<"Incremented age: "<<++age;
    }
};
int main()
{
    Tree t;
    t.get_age();
    cout<<"Tree's age: "<<t.age<<endl;
    ++t;
    return 0;
}
