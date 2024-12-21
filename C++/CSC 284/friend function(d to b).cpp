/*Write a program in C++ to convert a decimal number into binary without using an array with
a friend function.*/

#include<iostream>
using namespace std;
class d_to_b
{
    int n,binary=0;
    int i = 1;
public:
    void d()
    {
        cout<<"Enter the decimal Number: ";
        cin>>n;
        for (int j = n; j>0 ;j=j/2)
        {
            binary = binary + (j%2)*i;
            i = i*10;
            //n =n/2;
        }
    }
    friend void show(d_to_b a);
};
void show(d_to_b a)
{
    cout<<"Bianry: "<<a.binary;
}
int main()
{
    d_to_b a;
    a.d();
    show(a);
}
