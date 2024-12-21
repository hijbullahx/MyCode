#include<iostream>
using namespace std;
class binary
{
public:
    string s;
    void input()
    {
        cout<<"Enter a Binary Number: "<<endl;
        cin>>s;
        cout<<"Your entered number is: "<<s<<endl;
    }
    void check()
    {
        for ( int i = 0 ; i< s.length(); i++)
        {
            if(s.at(i)!= '0' && s.at(i)!= '1')
            {
                cout<<"Incorrect Inpute"<<endl;
                exit(0);
            }
        }
        cout<<"Inputed Correctly"<<endl;
        for(int i = 0; i< s.length(); i++)
        {
            if ( s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
        }

    void display()
    {
        check();
        cout<<"The compliment of the binery is: "<<s<<endl;

    }

};
int main()
{
    binary obj;
    obj.input();
    obj.display();
}
