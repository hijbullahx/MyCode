/*In a magical library, there's a "Book" class with a numeric attribute representing the number
of pages left to read. Overload the unary ~ operator to create a method to flip the book to
its last page. When the operator is used on the book, it should set the page number to the
maximum value representing the last page.*/
#include<iostream>
using namespace std;
class Book
{
public:
    int left = 100;
    int current_page;
    void get_page()
    {
        cout<<"Enter the current page: ";
        cin>>current_page;
    }
    void operator ~()
    {
        cout<<"The last page number is: "<<current_page+left<<endl;
    }
};
int main()
{
    Book b;
    b.get_page();
    cout<<"You are in page number: "<<b.current_page<<endl;
    ~b;
    return 0;

}
