/*You are building a library catalogue and need to store information about different
books. Create a class called "Book" with attributes for book title, author, and
availability status. Implement member functions to mark a book as borrowed and
display the book details. Create an array of 10 Book objects and print the details of all
available books.
*/
#include<iostream>
using namespace std;
class Book
{
public:
    string title, author, status;
    bool available;
    char av, y, n, N, Y, borr;
    void info()
    {
        cout<<"Enter Book Title Please: "<<endl;
        cin>>title;
        cout<<"Enter Author Name Please: "<<endl;
        cin>>author;
    }
    void all()
    {
        cout<<"Book Title is: "<<title<<endl;
        cout<<"Author Name is: "<<author<<endl;
    }
    void availability()
    {
        cout<<"If the book is borrowed? "<<endl;
        cout<<"Press Y if the book is borrowed else press N "<<endl;
        cin>>borr;
        if(borr == 'y' || borr == 'Y' || borr == 'N' || borr == 'n')
        {
            if(borr == 'y' || borr == 'Y')
            {
                available = true;
            }
            else
                available = false;
        }
        else
        {
            cout<<"Wrong Input! "<<endl;
        }

    }
};
int main()
{
    Book b[10];
    for (int i = 0; i<3; i++)
    {
        cout<<i+1<<": "<<endl;
        b[i].info();
        b[i].availability();
    }
    cout<<"All Books list: "<<endl;
    for (int i = 0; i<3; i++)
    {
         cout<<i+1<<": "<<endl;
         b[i].all();
    }
    cout<<endl;
    cout<<"Available Books are: "<<endl;
    for (int i = 0; i<3; i++)
    {
        if(b[i].available)
        {
            cout<<"ID: "<<i+1<<": "<<endl;
            b[i].title;
            b[i].all();

        }
    }



}
