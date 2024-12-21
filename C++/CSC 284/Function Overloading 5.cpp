/*Emily is developing a messaging application in C++. She wants to allow users to send
messages in different formats, such as plain text, HTML, and JSON. She uses function
overloading to define different versions of the sendMessage() function that take different
data types.*/
#include<iostream>
using namespace std;
class Message
{
public:
    void sendMessage(string text)
    {
        cout<<"This is plain text format message: "<<text<<endl;
    }
    void sendMessage(char text)
    {
        cout<<"This is HTML format message: "<<text<<endl;
    }
    void sendMessage(bool text)
    {
        cout<<"This is plain JSON format message: "<<text<<endl;
    }
};
int main()
{
    Message m;
    char a='A';
    bool b= true;
    string c="Hello!";
    m.sendMessage(a);
    m.sendMessage(b);
    m.sendMessage(c);
    return 0;
}
