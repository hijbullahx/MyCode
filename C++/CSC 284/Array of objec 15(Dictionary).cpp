/*Write a program to create a directory that contains the following information.
(a) Name of a person
(b) Address
(c) Telephone Number (if available with STD code)
(d) Mobile Number (if available)
(e) Head of the family*/
#include <iostream>
using namespace std;
class Dictionary
{
    public:
        string name, h_name,address;
        string t_n, m_n;
        char i, y, Y, n, N;
    void input()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Address: ";
        cin>>address;
        cout<<"Is Telephone Number is Available? "<<endl;
        cout<<"If available press y If not press n ";
        cin>>i;
        if(i == 'y' || i == 'Y' || i == 'n' || i == 'N')
        {
           if(i == 'y' || i == 'Y')
           {
               cout<<"Enter Telephone Number with STD code:";
               cin>>t_n;
           }
           else
           {
             t_n = "Not Available";
           }
        }
        else
        {
            cout<<"Wrong Press! "<<endl;
        }
        cout<<"Is Mobile Number is Available? "<<endl;
        cout<<"If available press y If not press n ";
        cin>>i;
        if(i == 'y' || i == 'Y' || i == 'n' || i == 'N')
        {
           if(i == 'y' || i == 'Y')
           {
               cout<<"Enter Mobile Number:";
               cin>>m_n;
           }
           else
           {
               m_n = "Not Available";
           }
        }
        else
        {
            cout<<"Wrong Press! "<<endl;
        }
        cout<<"Who is the Head of The Family? ";
        cin>>h_name;
    }
   void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Telephone Number: "<<t_n<<endl;
        cout<<"Mobile Number: "<<m_n<<endl;
        cout<<"Head of the Family: "<<h_name<<endl;
    }

};
int main()
{
    int d;
    cout<<"How many families information will be there in the Dictionary? ";
    cin>>d;
    Dictionary f[d];
    for(int i =0; i<d; i++)
    {
        cout<<i+1<<": "<<endl;
        f[i].input();
    }
    cout<<endl;
    cout<<"\t\tFamily Dictionary"<<endl;
    for(int i =0; i<d; i++)
    {
        cout<<i+1<<": "<<endl;
        cout<<"------------------------------"<<endl;
    f[i].display();
    cout<<"------------------------------"<<endl;
    }
    return 0;
}
