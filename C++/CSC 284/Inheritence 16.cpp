/*Create a class “Number” with protected member ‘num’, ’ sqr’, ‘cube’ constructor that
takes the input of num. Create another class, “Square,” which inherits “Number.” and
has a constructor which finds the square of ‘num’ and assigns it to ‘sqr’ and a public
member function ‘display’ which prints the value; of ‘sqr.’ Create another class,
“Cube,” which inherits “Number.” and has a constructor which finds the cube of
‘num’ and assigns it to ‘cube’ and a public member function ‘print’ which prints the
value. Of ‘cube.’*/
#include<iostream>
using namespace std;
class Number
{
protected:
    int num, sqr,cube;
public:
    Number()
    {
        cout<<"Input N: ";
        cin>>num;
    }
};
class Square : public Number
{
public:
    int n_sqr;
    Square()
    {
        n_sqr = num*num;
        sqr = n_sqr;
    }
    void display()
    {
        cout<<"The Value of 'sqr' is: "<<sqr<<endl;
    }
};
class Cube : public Number
{
public:
    int n_cube;
    Cube()
    {
        n_cube = num*num*num;
        cube = n_cube;
    }
    void print()
    {
        cout<<"The Value of Cube is: "<<cube<<endl;
    }
};
int main()
{
    Square s;
    s.display();
    Cube c;
    c.print();
    return 0;
}
