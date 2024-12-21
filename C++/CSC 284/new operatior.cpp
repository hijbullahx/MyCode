#include<iostream>

using namespace std;
int main()
{

    int*a = new int;
    *a =100;

    cout<<"The Output is:"<<*a<< endl;
    delete a;

}
