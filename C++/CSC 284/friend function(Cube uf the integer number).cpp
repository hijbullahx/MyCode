/*Write C++ Program to display the cube of the number upto a given integer using friend function.*/
#include<iostream>
using namespace std;
class cube
{
protected:
    int x, l;
public:
    void input()
    {
        cout<<"Enter the Integer Number: ";
        cin>>x;
    }
    friend void cube_i(cube c);
};
void cube_i(cube c)
{
    for(int i=0; i<c.x; i++)
    {
        c.l =(i+1)*(i+1)*(i+1);
        cout<<"Cube of integer "<<i+1<<" is: "<< c.l<<endl;
    }
}
int main()
{
    cube c;
    c.input();
    cube_i(c);
}
