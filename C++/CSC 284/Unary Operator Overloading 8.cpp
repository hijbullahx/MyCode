/*A "Balloon" class represents a balloon used in a scientific experiment. Overload the unary
operator + to increase the balloon&#39;s size, and - to decrease its size. The size should be limited
within a reasonable range.*/
#include<iostream>
using namespace std;
class Ballon
{
    int sizes = max(10,0);
public:
    Ballon()
    {
        cout<<"Enter the balloon size: ";
        cin>>sizes;
        if(sizes<0)
        {
            sizes = 0;
        }
        if(sizes>10)
        {
            sizes=10;
        }
    }
    void display()
    {
        cout<<sizes<<endl;
    }
    void operator +()
    {
        sizes++;
    }
    void operator -()
    {
        sizes--;
    }
};
int main()
{
    Ballon b;
    cout<<"Actual size: ";
    b.display();
    cout<<"After using + size is: ";
    +b;
    b.display();
    cout<<"After using - size is: ";
    -b;
    b.display();
    return 0;
}
