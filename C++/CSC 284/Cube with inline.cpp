#include <iostream>
#include <cmath>
using namespace std;
inline int cube(int n)
{
return pow(n, 3);
}
int main()
{
int n;
cout<<"Enter any integer number: \n";
cin>>n;
cout<<"The cube of " << n << " is " << cube(n) <<endl;
return 0;
}
