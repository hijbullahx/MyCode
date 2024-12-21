/*Sum of n number of odd natural numbers by using friend class in C++*/
#include<iostream>
using namespace std;
class odd
{
    int n, num, sum =0;
public:
    void get_value()
    {
        cout<<"Enter How many odd number do you need for sum: ";
        cin>>n;
    }
    friend void odd_n(odd o);
};
void odd_n(odd o)
{
    for(int i =0; i<o.n; i++)
    {
        o.num = 2*(i+1) - 1;
        o.sum = o.sum + o.num;
    }
    cout<<"Sum of "<<o.n<<" number of odd natural numbers is: "<<o.sum;
}
int main()
{
    odd o;
    o.get_value();
    odd_n(o);
}
