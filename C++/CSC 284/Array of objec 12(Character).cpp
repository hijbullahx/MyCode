
/*You are developing a video game and want to find the character with the highest level.
Create a class called "Character" with attributes for character name and level.
Implement member functions to update the character's level and display the character
details. Create an array of 20 Character objects and print the details of the character
with the highest level.*/
#include<iostream>
using namespace std;
class Character
{
    string name;
public:
    int level;
    void input()
    {
        cout<<"Enter Character Name: ";
        cin>>name;
    }
    void update()
    {
        cout<<"Charecter Level? ";
        cin>>level;
    }
    void display()
    {
        cout<<"Character Name: "<<name<<endl;
        cout<<"Level: "<<level<<endl;
    }
};
int main()
{
    Character c[20];
    for(int i =0; i<3 ; i++)
    {
        cout<<"For Player No. "<<i+1<<":"<<endl;
        c[i].input();
        c[i].update();
    }
    for(int i =0; i<20 ; i++)
    {
        cout<<"Player No. "<<i+1<<":"<<endl;
        c[i].display();

    }
    int h_level = c[0].level;
    int h_l_index = 0;
    for(int i= 0; i<20; i++ )
    {
        if(h_level<c[i].level)
        {
            h_level = c[i].level;
            h_l_index = i;
        }
    }
    cout<<"Player with the Highest Level: "<<endl;
    cout<<"---------------------------------------"<<endl;
    c[h_l_index].display();
    cout<<"---------------------------------------"<<endl;

}
