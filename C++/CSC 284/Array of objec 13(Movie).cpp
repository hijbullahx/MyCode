/*You are organizing a movie marathon and need to keep track of the movies and their
genres. Create a class called "Movie" with attributes for movie title and genre.
Implement member functions to update the movie genre and display the movie details.
Create an array of 9 Movie objects and print the details of all movies along with their
genres.*/
#include<iostream>
using namespace std;
class Movie
{
    string name, genres;
public:
    void input()
    {
        cout<<"Input the movie name please: ";
        cin>>name;
        cout<<"What is it's genres? ";
        cin>>genres;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Genres: "<<genres<<endl;
    }
    void update()
    {
        cout<<"Enter Updated Genres: ";
        cin>>genres;
    }
};
int main()
{
    Movie m[9];
    for(int i =0; i<9; i++)
    {
        cout<<i+1<<": "<<endl;
        m[i].input();
    }
    cout<<"Movie Details: "<<endl;
    for(int i =0; i<9; i++)
    {
        cout<<i+1<<": "<<endl;
        m[i].display();
    }
    for(int i =0; i<9; i++)
    {
        cout<<"For "<<i+1<<" No. Movie: "<<endl;
        m[i].update();
    }
    cout<<endl;
    cout<<"Updated Details: "<<endl;
    for(int i =0; i<9; i++)
    {
        cout<<i+1<<": "<<endl;
        m[i].display();
    }
}
