#include<iostream>
#include<vector>
using namespace std;
class check
{
public:
    int t;
    char c;
    vector <char> d;
    check()
    {
        cin>>t;
        if(t>=1 && t<= 26)
        {
            for(int i =0; i< t; i++)
            {
                cin>>c;
                d.push_back(c);
            }
            for(int i = 0; i<t; i++)
            {
                if(d[i] == 'c' || d[i] == 'o' || d[i] == 'd' || d[i] == 'e' || d[i] == 'f' || d[i] == 'o'|| d[i] == 'r' || d[i] == 'e' || d[i] == 's')
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
};
int main()
{
    check h;
    return 0;
}
