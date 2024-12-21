/*Bob is building a game engine in C++. He wants to provide different versions of the
loadTexture() function that can load textures from files, from memory, or from network
streams. He uses function overloading to define different versions of the function that
take different input sources.*/
#include<iostream>
using namespace std;
class game
{
public:
    void loadTexture(string text)
    {
        cout<<"This is from file"<<endl;
    }
    void loadTexture(bool text)
    {
        cout<<"This is from memory"<<endl;
    }
    void loadTexture(char text)
    {
        cout<<"This is from network"<<endl;
    }
};
int main()
{
    game g;
    string a;
    bool b;
    char c;
    g.loadTexture(a);
    g.loadTexture(b);
    g.loadTexture(c);
    return 0;
}

