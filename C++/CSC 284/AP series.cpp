#include<iostream>
using namespace std;
void inline ap(int n, int a, int d)
{
    int sum=0;

    sum = (n*(2*a*(n-1)*d))/2 ;
    cout<< "The Sum of your inputed AP is:"<<sum;
}
int main()
{
    int terms, firstnumber, commondifference;
    cout<<"Enter how many terms wanted\n";
    cin>>terms;

    cout<<"Enter the first number\n";
    cin>>firstnumber;

    cout<<"Enter common difference\n";
    cin>>commondifference;
    ap(terms, firstnumber, commondifference);

}
