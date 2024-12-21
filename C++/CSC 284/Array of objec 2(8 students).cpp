/*Write a program to print the roll number and average marks
of 8 students in three subjects (each out of 100). The marks
are entered by the user and the roll numbers are
automatically assigned.*/
#include<iostream>
using namespace std;
class students
{
public:
    float s1, s2, s3, av;
    void input()
    {
        cout<<"Inter the obtained marks of the first subject: "<<endl;
        cin>>s1;
        cout<<"Inter the obtained marks of the second subject: "<<endl;
        cin>>s2;
        cout<<"Inter the obtained marks of the third subject: "<<endl;
        cin>>s3;
    }
    void display()
    {
        if(0<=s1 && s1<=100 && 0<=s2 && s2<=100 && 0<=s3 && s3<=100)
        {
        cout<<"Marks in S1: "<< s1<<endl;
        cout<<"Marks in S2: "<< s2<<endl;
        cout<<"Marks in S3: "<< s3<<endl;
        av = (s1+s2+s3)/3;
        cout<<"The average mark is: "<< av<< endl;
        }
        else
        {
            cout<<"Wrong Input!"<<endl;
        }



    }

};
int main()
{
    students o[8];
    cout<<"\t\t Input Marks Please: "<<endl;
    for(int n=0; n<8 ; n++)
    {

        for(int i = 0; i< 8; i++)
        {
            n++;
            cout<<"Roll: "<<n<<endl;
            o[i].input();
        }
    }
    cout<<endl;
    cout<<"Inputed Marks are: "<<endl;
    for(int n=0; n<8 ; n++)
    {

        for(int i = 0; i< 8; i++)
        {
            n++;
            cout<<"----------------"<<endl;
            cout<<"Roll: "<<n<<endl;
            o[i].display();
            cout<<"----------------"<<endl;
            cout<<endl;
        }
    }


}
