#include<iostream>
using namespace std;
class code
{
    int id;
public:
    code()
    {

    }
    code(int a)
    {
        id=a;
    }
    code(code &x)
    {
        id = x.id;
    }
    void display()
    {
        cout<<id;
    }
};
int main()
{
    code A(100);
    A.display();
    code B(A);
    A.display();
    code C = A;
    A.display();
}
