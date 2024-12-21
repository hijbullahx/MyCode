#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Case
{
public:
    vector <char> c;
    char d;
    int n;
    Case()
    {
        cin>>n;
        if(n>=1 && n<= pow(10,3))
        {
           for(int i =0; i< n; i++)
        {
            cin>>d;
            c.push_back(d);
        }
         for(int i =0; i<n; i++)
        {
            if(c[i]>= 'A' && c[i]<= 'Z')
            {
                cout<<"is upper"<<endl;
            }
            else if(c[i]>= 'a' && c[i]<= 'z')
            {
                cout<<"is lower"<<endl;
            }
            else if(c[i]>='0' && c[i]<='9')
            {
                cout<<"is digit"<<endl;
            }
        }
        }
    }
};
int main()
{
    Case s;
}
