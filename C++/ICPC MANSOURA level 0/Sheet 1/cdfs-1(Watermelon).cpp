#include<iostream>
using namespace std;
class watermelon
{
public:
    int w;
    void even()
    {
        cin>>w;
        if(w>=1 && w<= 100)
        {
            if(w%2 == 0 && w>2)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
        }

    }

};
int main()
{
    watermelon w;
    w.even();
}
