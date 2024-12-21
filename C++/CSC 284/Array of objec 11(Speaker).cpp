/*You are organizing a conference and need to keep track of the speakers and
their presentation topics. Create a class called "Speaker" with attributes
for speaker name and topic. Implement member functions to update the
speaker's topic and display the speaker details. Create an array of 10
Speaker objects and print the details of all speakers along with their
topics.*/
#include<iostream>
using namespace std;
class Speaker
{
public:
    string name, topic;
    void input()
    {
        cout<<"Enter Speaker Name Please: ";
        cin>>name;
        cout<<"What is His Topic Name: ";
        cin>>topic;
    }
    void display()
    {
        cout<<"Speaker Name: "<<name<<endl;
        cout<<"Presentation Topic: "<<topic<<endl;
    }
    void update()
    {
       cin>>topic;
    }

};
int main()
{
    Speaker s[10];
    for(int i = 0; i<10; i++)
    {
        cout<<i+1<<": "<<endl;
        s[i].input();
    }
    cout<<"Speaker Details: "<<endl;
    for(int i = 0; i<10; i++)
    {
        cout<<i+1<<" No. Speaker: "<<endl;
        s[i].display();
    }
    for(int i = 0; i<10; i++)
    {
        cout<<"Enter Updated Topic: "<<endl;
        cout<<i+1<<" No. Speaker: "<<endl;
        s[i].update();
    }
    for(int i = 0; i<10; i++)
    {
        cout<<i+1<<" No. Speaker: "<<endl;
        s[i].display();
    }
}
