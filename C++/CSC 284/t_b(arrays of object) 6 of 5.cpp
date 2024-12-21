#include<iostream>
using namespace std;
const int size = 3;
class emp
{
    char name[50];
    float age;
public:
    void input();
    void output();
};
void emp :: input(void)
{
    cout<<"Enter Employee Name: ";
    cin>>name;
    cout<<"Enter Employee Age: ";
    cin>>age;
}
void emp :: output(void)
{
    cout<<"\t\tEmployee Details: "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
int main()
{
    emp e[size];
    for(int i =0; i< size; i++)
    {
        e[i].input();
    }
    for(int i =0; i< size; i++)
    {
        e[i].output();
    }

}

