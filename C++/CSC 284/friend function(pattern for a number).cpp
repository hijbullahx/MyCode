/*C++ program of friend function to display a pattern for a number of rows*/
#include<iostream>
using namespace std;
class pattern
{
protected:
    int n;
public:
    void enter()
    {
        cout<<"Enter The Number For Pattern: ";
        cin>>n;
    }
    friend void display(pattern p);
};
void display(pattern p)
{
    for(int i =1; i<=p.n; i++)
    {
        for(int s=1; s<=p.n-i; s++)
        {
            cout<<"  ";
        }
        for(int j =1; j<=i; j++)
            {
                cout<<j<<" ";
            }
            for(int k = i-1; k>=1;  k--)
            {
                cout<<k<<" ";
            }
            cout<<endl;
    }
}
int main()
{
    pattern p;
    p.enter();
    display(p);
}


