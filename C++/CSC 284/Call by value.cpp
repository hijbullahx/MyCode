#include<iostream>
using namespace std;

void fun(int x, int y);

int main()
{
    int x=10;
    int y= 20;
    fun(x,y);
    cout<<x<<endl<<y;
}
 void fun(int x, int y)
{
     x= 20;
     y = 10;
}
