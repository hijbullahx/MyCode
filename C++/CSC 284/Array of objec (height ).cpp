#include<iostream>
using namespace std;
class height
{

public:
    float h;
    void input()
    {
        cin>>h;
    }
    void output()
    {
        cout<<"Heigh of the student is: "<<h<<endl;
    }

};
int main()
{
    int s;
    cout<<"How many students are there? "<<endl;
    cin>>s;
    cout<<endl;
    height o[s];
    float th;
    th= 0;
    for (int n= 0; n<s; n++)
    {
        for(int i = 0; i<s; i++)
        {
            n++;
            cout<<"Enter hight for SL- "<<n<<":"<<endl;

         o[i].input();
         th = th + o[i].h;
        }
    }
    cout<<"All students heights are: "<<endl;
    cout<<"---------------------------"<<endl;
    for (int n= 0; n<s; n++)
    {
        for(int i = 0; i<s; i++)
        {
            n++;
            cout<<"SL: "<<n<<endl;

         o[i].output();
        }
    }
    cout<<"---------------------------"<<endl;
    cout<<endl;
    cout<<"Average of All students height is: "<<(th/s)<<endl;
}
