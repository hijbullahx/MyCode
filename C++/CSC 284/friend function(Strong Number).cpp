/*Write a C++ program to find Strong Numbers within a range of numbers by using friend
function in C++*/
#include<iostream>
using namespace std;
class strong
{

private:
    int x,n,d, sum,m,f,r,l;
public:
    void input()
    {
        cout<<"Enter a number for range: ";
        cin>>r;
    }

    friend void strong_number(strong s);
};
 void strong_number(strong s)
    {
        cout<<"Strong Numbers between 1 to "<<s.r<<" is: ";
             for(int k =1; k<=s.r; k++)
        {
            s.sum = 0;
            for(int i =k ; i!=0; i =i/10)
            {
                s.d = i%10;
                s.f=1;
            for(int j = 0; j<s.d; j++)
                {
                    s.f= s.f* (j+1);
                }
                s.sum = s.sum + s.f;
            }
            if(s.sum  == k)
            {
                cout<<s.sum<<" ";
            }
        }

    }

int main()
{
    strong s;
    s.input();
    strong_number(s);
}
