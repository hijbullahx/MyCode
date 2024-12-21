#include<iostream>
using namespace std;
class Post
{
public:
    int ID=1;
    string author_name= "Jane", content="Hello, world!";
    void post_details()
    {

        cout<<"Post ID: "<<ID<<endl;
        cout<<"Author name is: "<<author_name<<endl;
        cout<<"Content: "<<content<<endl;
    }
    void edited_content()
    {
        cout<<"\t\tUpdated post: "<<endl;
        cout<<endl;
        content = "Welcome to my profile!";
    }
};
int main()
{
    Post h;
    h.post_details();
    cout<<endl;
    h.edited_content();
    h.post_details();
}
