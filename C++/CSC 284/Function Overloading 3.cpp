/*Charlie is working on a database application in C++. He wants to allow users to query
the database using different data types, such as integers, strings, and dates. He uses
function overloading to define different versions of the query() function that take different
parameter types.*/
#include<iostream>
using namespace std;
class Query
{
public:
    void query(int data)
    {
        cout<<"The Integer data is: "<<data<<endl;
    }
    void query(string data)
    {
        cout<<"The String Data is: "<<data<<endl;
    }
    void query(char data)
    {
        cout<<"The Date is: "<<data<<endl;
    }
};
int main()
{
    int roll = 23;
    string name = "Hijbullah";
    char date = 'D';
    Query q;
    q.query(roll);
    q.query(name);
    q.query(date);
    return 0;
}
