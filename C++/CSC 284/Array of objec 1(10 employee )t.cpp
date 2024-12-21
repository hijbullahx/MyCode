#include<iostream>
using namespace std;
class employee
{
public:
    string name, j_date;
    int salary;
    void input()
    {
        cin>>name;
        cin>>j_date;
        cin>>salary;
    }
    void output()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Date of joining: "<< j_date<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    employee obj[10];
    for(int n= 0;n<10; n++)
    {
        for(int i = 0; i< 10; i++)
    {
        n++;
        cout<<n<<":"<<endl;
        obj[i].input();
    }
    }
    for(int n = 0; n<10; n++)
    {
        for(int i = 0; i< 10; i++)
    {
        n++;
        cout<<n<<":"<<endl;
        obj[i].output();
        cout<<endl;
    }
    }
}
