#include<iostream>
using namespace std;
class Player
{
public:
    string name="Alice";
    int level=1;
    float score=100;
    void print()
    {
        cout<<"Player Name is: "<< name<<endl;
        cout<<"Player Level is: "<< level<<endl;
        cout<<"Player Score is: "<< score<<endl;
    }
    void level_up()
    {
        int a;
        char y;
        cout<<"Is player score is increased?"<<endl;
        cout<<"Press Y/y for input new score"<<endl;
        cout<<"Press n/N for for ending this procedure"<<endl;
        cin>>y;
        if(y == 'y' || y == 'Y' || y =='n'||y=='N')
        {
            if (y== 'Y' || y== 'y')
            {
                cout<<"Input new score"<<endl;
        cin>> a;
        int new_score = score+a;
        if(new_score>=150)
                {
                    int new_level = level+1;
                    cout<<"Player level is: "<<new_level<<endl;
                }
        else
                {
                    level = 1;
                    cout<<"Player Level is: "<<level<<endl;
                }

            }
            else
            {
                cout<<"Okay";
            }
        }

        else
        {
            cout<<"Invalid Input";
        }

    }
};
int main()
{
    Player h;
    h.print();
    h.level_up();

}
