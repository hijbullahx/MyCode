/*Jake is building a networking application in C++. He wants to allow users to
communicate over different network protocols, such as TCP, UDP, and HTTP. He uses
function overloading to define different versions of the sendMessage() function that take
different network protocol types.*/
#include<iostream>
using namespace std;
class Jake
{
public:
    void sendMessege(string n)
    {
        cout<<"This is "<<n<<" type protocol."<<endl;
    }
    void sendMessege(char x)
    {
        cout<<"This is UDP type protocol."<<endl;
    }
    void sendMessege(bool b)
    {
        cout<<"This is HTTP type protocol."<<endl;
    }
};
int main()
{
    Jake j;
    string s = "TCP";
    char c;
    bool v;
    j.sendMessege(s);
    j.sendMessege(c);
    j.sendMessege(v);
    return 0;
}
