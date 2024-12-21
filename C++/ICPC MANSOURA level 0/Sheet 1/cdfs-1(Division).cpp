#include<iostream>
using namespace std;
class Division
{
public:
    int t,r;
    void output()
    {
        cin>>r;
    }
    void display()
    {
            if(r>= -5000 && r<= 5000)
            {
                if(r>= 1900)
                {
                    cout<<"Division 1"<<endl;
                }
                if(r>= 1600 && r<= 1899)
                {
                    cout<<"Division 2"<<endl;
                }
                if(r>= 1400 && r<= 1599)
                {
                    cout<<"Division 3"<<endl;
                }
                if(r<= 1399)
                {
                    cout<<"Division 4"<<endl;
                }
            }
          }
};
int main()

{
    int t;
    cin>>t;
    Division d[t];
    for(int i =0; i< t; i++)
    {
        d[i].output();
    }

    for(int i =0; i< t; i++)
    {
        d[i].display();
    }
}
