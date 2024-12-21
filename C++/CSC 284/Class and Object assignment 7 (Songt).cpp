#include<iostream>
using namespace std;
class Song
{
public:
    string title= "Bohemian Rhapsody", artist_name="Queen";
    string duration="5:55";
    void details()
    {
        cout<<"\tTitle: "<<title<<endl;
        cout<<"\tArtist Name: "<<artist_name<<endl;
        cout<<"\tDuration: "<<duration<<endl;
    }
};
int main()
{
    Song i;
    i.details();
    return 0;
}
