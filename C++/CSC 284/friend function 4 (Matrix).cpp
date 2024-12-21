/*Define a class Matrix with private members for the number of rows,
number of columns, and a two-dimensional array for the matrix elements.
Write a friend function multiply that takes two Matrix objects as
parameters and returns their product.*/
#include<iostream>
using namespace std;
class Matrix
{
    int m[3][3];
public:
    void read()
    {
        int i, j;
        for(i=0;i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                cout<<"m["<<i<<"]["<<j<<"]: ";
                cin>>m[i][j];
            }
        }
    }
    void display()
        {
            for(int i =0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    cout<<m[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
        friend Matrix mul(Matrix m1, Matrix m2);
};
Matrix mul(Matrix m1, Matrix m2)
{
    Matrix result;
    for(int i =0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            result.m[i][j] = 0;
            for(int k =0; k<3; k++)
            {
                result.m[i][j] = result.m[i][j]+ m1.m[i][k]*m2.m[k][j];
            }
        }
    }
    return result;
}
int main()
{
    cout<<"Enter the Elements of the 3X3 matrix: "<<endl;
    Matrix m1, m2;
    cout<<"Enter The Elements for the first Matrix: "<<endl;
    m1.read();
    cout<<"Enter The Elements for the second Matrix: "<<endl;
    m2.read();
    Matrix product = mul(m1,m2);
    cout<<"Product: "<<endl;
    product.display();
    return 0;
}
