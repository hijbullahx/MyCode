#include<iostream>
using namespace std;
class item
{
    int a = 10, b =20;
    public:

        void getdata(int a, int b);
};
inline void item :: getdata(int x, int y)
{
    x = a;
    y = b;
    cout<<x<<endl<<y<<endl;
}
int main()
{
    int x, y;
    item o;
    o.getdata(x,y);
}
