#include<iostream>
using namespace std;
enum week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
int main()
{

    week today;
    today = Mon;
    cout<<"Day "<< today+1;
}
