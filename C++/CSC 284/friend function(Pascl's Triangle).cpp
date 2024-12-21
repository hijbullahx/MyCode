/*Write a C++ program to display Pascal’s triangle using the friend function.*/
#include<iostream>
using namespace std;
class pascal
{
private:
    int r,MxD, num, NS;
public:
    void input()
    {
        cout<<"Enter Number of Rows: ";
        cin>>r;
    }
    friend void pascl_triangle(pascal p);


};
void pascl_triangle(pascal p)
 {
        p.MxD = 2*p.r-1;
       for(int i = 0; i<p.r; i++)
       {
           p.num =1;
           p.NS = (p.MxD - (2*i+1))/2;
           for (int j = 0; j< p.NS; j++)
           {
               cout<<"*";
           }
           for(int j = 0; j<=i; j++)
           {
               cout<<p.num<<" ";
               p.num = p.num*(i-j)/(j+1);
           }
           cout<<endl;
       }
    }

int main()
{
    pascal p;
    p.input();
    pascl_triangle(p);
}
