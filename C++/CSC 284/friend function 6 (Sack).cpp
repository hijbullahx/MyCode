/*Define a class Stack with private members for
the stack elements and top index. Write a friend
function isEmpty that takes a Stack object as a
parameter and returns true if the stack is
empty, and false otherwise.*/
#include<iostream>
using namespace std;
class Stack
{
    string stack_elements;
    double top_index;
public:
    Stack(string x, double y)
    {
        stack_elements = x;
        top_index = y;
    }
    friend bool is_stack(Stack s1);
};
bool is_stack(Stack s1)
{
    return s1.top_index<0;
}
int main()
{
    string a;
    double b;
    cout<<"Enter Stack Elements: ";
    cin>>a;
    cout<<"Top Index: ";
    cin>>b;
    Stack s(a, b);
    if(is_stack(s))
    {
        cout<<"The Stack is Empty! "<<endl;
    }
    else
    {
        cout<<"The Stack is not Empty! "<<endl;
    }
}
