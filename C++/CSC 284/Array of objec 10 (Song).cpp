/*You are developing a music play list and want to find the song with the longest duration.
Create a class called "Song" with attributes for song title and duration. Implement
member functions to update the song duration and display the song details. Create an
array of 15 Song objects and print the details of the song with the longest duration.*/
#include<iostream>
using namespace std;
class Song
{
public:
    string title;
    float duration;
    void update()
    {
        cout<<"Enter Song Title: ";
        cin>>title;
        cout<<"Enter Duration for the song: ";
        cin>>duration;
    }
    void display()
    {
        cout<<"Song Title: "<<title<<endl;
        cout<<"Duration: "<<duration<<endl;
    }
};
int main()
{
    Song s[15];
    for(int i =0; i<15; i++)
    {
        cout<<"Song No. "<<i+1<<": "<<endl;
        s[i].update();
    }
    for(int i =0; i< 15; i++)
    {
        cout<<i+1<<": "<<endl;
        s[i].display();
    }
    float l_duration = s[0].duration;
    int l_d_index = 0;

    cout<<"-----------------------------------------"<<endl;
    for(int i = 0; i<15; i++)
    {
        if(s[i].duration>l_duration)
        {
            l_duration = s[i].duration;
            l_d_index = i;
        }

    }
    cout<<"Song with the longest duration: "<<endl;
    s[l_d_index].display();
    cout<<"-----------------------------------------"<<endl;


}
