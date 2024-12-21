/*Henry is developing a multimedia application in C++. He wants to allow users to play
audio and video files with different codecs and file formats. He uses function overloading
to define different versions of the play() function that take different combinations of
parameters for codecs and file formats.*/
#include<iostream>
using namespace std;
class Henry
{
public:
    void play(string codec, char file)
    {
        cout<<"Playing the "<<codec<<" audio with codec formate"<<endl;
        cout<<"Playing the "<<file<<" video with file formate"<<endl;
    }
    void play(char codec, string file)
    {
        cout<<"Playing the "<<codec<<" video with codec formate"<<endl;
        cout<<"Playing the "<<file<<" audio with file formate"<<endl;
    }
};
int main()
{
    Henry h;
    string a = "Bangla", b = "Hindi";
    char c = 'X', d = 'Y';
    h.play(a,c);
    h.play(b,d);
    return 0;
}
