/*You are the manager of a sports team and want to find the player with the highest score.
Create a class called "Player" with attributes for player name and score. Implement
member functions to update the player's score and display the player details. Create an
array of 8 Player objects and print the details of the player with the highest score.*/
#include<iostream>
using namespace std;
class Player
{
public:

    string name;
    float score;
    void update()
    {
            cin>>name;
            cout<<"His Score? "<<endl;
            cin>>score;

    }
    void display()
    {


            cout<<"Name: "<<name<<endl;
            cout<<"Score: "<<score<<endl;

    }

};
int main()
{
    Player o[2];

        for(int i =0; i< 2; i++)
        {
            cout<<i+1<<": Name Please "<<endl;
            o[i].update();
        }
        cout<<"\t\tPlayer Details: "<<endl;

        for(int i =0; i< 2; i++)
        {
            cout<<i+1<<" ";
            o[i].display();
        }
        float Max =0;
        int maxi = 0;
        Max = o[0].score;
        cout<<"Highest Scored Player is: "<<endl;
        for(int i =0; i< 2; i++)
        {

           if(o[i].score > Max)
           {
               Max = o[i].score;
               maxi = i;


           }
        }
        cout<<"-------------------------"<<endl;
        o[maxi].display();
        cout<<"-------------------------"<<endl;
}
