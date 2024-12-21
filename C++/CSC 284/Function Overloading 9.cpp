/*Isabel is working on a machine learning library in C++. She wants to allow users to train
models on different types of data, such as numerical data, text data, and image data.
She uses function overloading to define different versions of the trainModel() function
that take different input data types.*/
#include<iostream>
using namespace std;
class Isabel
{
public:
    void trainMdel(int num)
    {
        cout<<"Training on numerical data such as: "<<num<<endl;
    }
    void trainMdel(string text)
    {
        cout<<"Training on text data such as: "<<text<<endl;
    }
    void trainMdel(char image)
    {
        cout<<"Training on image data such as: "<<image<<endl;
    }
};
int main()
{
    Isabel i;
    int n = 123;
    string t = "Hello!";
    char im = 'I';
    i.trainMdel(n);
    i.trainMdel(t);
    i.trainMdel(im);
    return 0;
}
