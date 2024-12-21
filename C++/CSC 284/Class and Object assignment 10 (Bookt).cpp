#include<iostream>
using namespace std;
class Book
{
public:
    string ID="B001", title="To Kill a Mockingbird",
    author="Harper Lee", status="Available";
    void check()
    {
        cout<<"Book ID: "<<ID<<endl;
        cout<<"Book Title: "<<title<<endl;
        cout<<"Author's Name: "<<author<<endl;
        cout<<"Availability Status: "<<status<<endl;
    }
    void returns()
    {
        char c,r;
        cout<<"Are you checked the book?"<<endl;
        cout<<"If you checked press Y"<<endl;
        cout<<"If not press N"<<endl;
        cin>>c;
        if(c== 'y' || c== 'Y' || c == 'n' || c == 'N')
        {
            if(c== 'y' || c== 'Y')
            {
                cout<<"Book checked out successfully "<<endl;
                cout<<"Do you ant to return it?"<<endl;
                cout<<"If you returned press Y"<<endl;
                cout<<"If not press N"<<endl;
                cin>>r;
                if(r== 'y' || r== 'Y' || r == 'n' || r == 'N')
                {
                     if(r== 'y' || r== 'Y')
                     {
                         cout<<"Book Returned Successfully"<<endl;
                         cout<<"Here is the updated list: "<<endl;
                         check();
                     }
                     else
                     {
                         cout<<"Return in within due date please"<<endl;
                         status = "Not Available";
                         cout<<"Here is the updated list: "<<endl;
                         check();
                     }
                }
                else
                {
                    cout<<"Wrong Press"<<endl;
                }
            }
            else
            {
                cout<<"Check it out"<<endl;

            }

        }
        else
            cout<<"Wrong Press"<<endl;
    }

};
int main()
{
    Book u;
    cout<<"\tCheckout the Book: "<<endl;
    u.check();

    cout<<endl;
    u.returns();
}
