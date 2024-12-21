#include<iostream>
using namespace std;
class Book
{
public:
    int left = 100;
    int current_page;
    int last_page;
    Book()
    {
        cin>>current_page;
    }
    void operator ~()
    {
        cout<<"The last page is: "<<current_page+left<<endl;
    }
};
int main()
{
    Book b;
    cout<<"You are in page number: "<<b.current_page<<endl;
    ~b;
    return 0;
}
