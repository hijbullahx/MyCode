#include<iostream>
using namespace std;
void fun(int *ptr1, int *ptr2);
int main()
{
int x = 10;
int y = 20;
fun(&x, &y);
cout<<"X="<<x<<endl<<"Y="<<y;
}

void fun(int *ptr1, int *ptr2)
{
    *ptr1 = 20;
    *ptr2 = 10;
}
