#include<iostream>
using namespace std;
class Date
{
    int year, month;
    string day;
    public:
        Date(int a, int b, string c)
        {
            year = a;
            month = b;
            day = c;
        }
        friend bool display(Date d);
};
bool display(Date d)
{
    return d.year % 4 == 0 ;
}
int main()
{
    int y,m;
    string d;
    cout<<"Enter Year: ";
    cin>>y;
    cout<<"Enter Month: ";
    cin>>m;
    cout<<"Enter Day: ";
    cin>>d;
    Date d1(y,m,d);
    if(display(d1))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}
