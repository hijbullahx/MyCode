#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp =a;
    a =b;
    b= temp;

}
int main()
{
    int x=10, y=5;
    cout<<"X="<<x<<"\tY="<<y<<endl;
    swap(x,y);
    cout<<"X="<<x<<"\tY="<<y;


}
