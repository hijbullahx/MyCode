#include<iostream>
using namespace std;
class Post
{
    int Id;
    string name, content;
public:
    Post()
    {
        cout<<"Enter ID: ";
        cin>>Id;
        cout<<"Name: ";
        cin>>name;
        cout<<"Content: ";
        cin>>content;
    }
    void display()
    {
        cout<<"ID: "<<Id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Name: "<<content<<endl;
    }
    Post(Post &n)
    {
        cout<<"Enter New: "<<endl;
        content = n.content;
        cin>>n.content;
    }
    ~Post()
    {
        cout<<"Destructed"<<endl;
    }
};
int main()
{
    Post p;
    p.display();
    Post q = p;
    p.display();
}
