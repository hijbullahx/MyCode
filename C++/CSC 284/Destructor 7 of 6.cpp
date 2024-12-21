#include<iostream>
using namespace std;
int count =0;
class alpha
{
public:
    alpha()
    {
        count++;
        cout<<"\nNo.of object created"<<count;
    }
    ~alpha()
    {
        cout<<"\nNo. of object destroyed"<<count;
        count--;
    }
};
int main()
{
    cout<<"\n\nEnter MAIN\n";
    alpha A1, A2, A3, A4;
    {
        cout<<"\n\nEnter Block 1\n";
        alpha A5;
    }
    {
        cout<<"\n\nEnter Block 2\n";
        alpha A6;
    }
    cout<<"\n\nRe-enter main";
    return 0;
}
