#include<iostream>
using namespace std;
class MobileUser
{
public:
    void call()
    {
        cout<<"Hello! "<<endl;
    }
    virtual void sendmessage()=0;
};
class Rahim : public MobileUser
{
public:
    void sendmessage() override
    {
        cout<<"Hi this is Rahim! "<<endl;
    }
};
class Karim : public MobileUser
{
public:
    void sendmessage() override
    {
        cout<<"Hi this is Karim! "<<endl;
    }
};
int main()
{
    MobileUser *m;
    m->call();
    Rahim r;
    Karim k;
    m = &r;
    m->sendmessage();
    m = &k;
    m->sendmessage();
    return 0;
}
