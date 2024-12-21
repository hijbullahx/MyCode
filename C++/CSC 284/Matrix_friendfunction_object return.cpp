#include<iostream>
using namespace std;
class Matrix
{
    int m[3][3];
public:
    void read()
    {
        for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<"m["<<i<<"]["<<j<<"]=";
            cin>>m[i][j];
        }
    }
    }
    void display()
    {
        for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<m[i][j];
        }
    }
    }
    friend Matrix mul(Matrix m1, Matrix m2);
};
Matrix mul(Matrix m1, Matrix m2)
{
    Matrix result;

        for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            result.m[i][j] =0;
           for(int k =0; k<3; k++)
           {
               result.m[i][j] = result.m[i][j]+m1.m[i][k]*m2.m[k][j];
           }
        }
    }
    return result;
    }
int main()
{
    Matrix m1, m2;
    cout<<"Enter The First Matrix: "<<endl;
    m1.read();
    cout<<"Enter The Second Matrix: "<<endl;
    m2.read();
    Matrix m3 = mul(m1, m2);
    m3.display();
}
