/*Fibonacci Series is the series where the next term id the sum of the previous two term.
For Example: 0, 1, 1, 2, 3, 5, 5, ................. , n
Now write a program to print the Fibonacci series using call by reference.
N.B. The output will be written in the main function*/
#include<iostream>
using namespace std;
void fibo(int n, int *a, int *b)
{
    for(int i = 0; i< n; i++)
    {
        int sum = *a + *b;
        cout<<sum<<" ";
        *a = *b;
        *b = sum;
    }
}
int main()
{
    int s;
    cout<<"Term: ";
    cin>>s;
    int x =0; int y = 1;
    cout<<"The series is: ";
    fibo(s, &x, &y);
}
