/*Dave is creating a graphics library in C++. He wants to allow users to draw shapes with
different colors and line styles. He uses function overloading to define different versions
of the drawShape() function that take different combinations of parameters for color and
line style.*/
#include<iostream>
using namespace std;
class Dave
{
public:
    void drawShape(int color_code, string color_line)
    {
        cout<<"Draw with this color code: "<<color_code<<" and this shape: "<<color_line<<endl;
    }
    void drawShape(float color_code, char color_line)
    {
        cout<<"Draw with this color code: "<<color_code<<" and this line shape: "<<color_line<<endl;
    }
};
int main()
{
    Dave d;
    int color = 235666;
    string line = "Triangle";
    float colorf = 234.5;
    char linec = 'I';
    d.drawShape(color, line);
    d.drawShape(colorf, linec);
    return 0;
}
