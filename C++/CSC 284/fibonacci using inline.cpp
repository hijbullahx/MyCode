#include <iostream>
using namespace std;
inline int fib(int num)
{
int prev = 0;
int curr = 1;
cout << "Fibonacci Series up to " << num << "terms: ";
for (int i = 0; i < num; i++)
{
cout << prev << " ";
int next = prev + curr;
prev = curr;
curr = next;
}
cout << endl;
}
int main()
{
int numTerms;
cout << "Enter the number of terms: ";
cin >> numTerms;
fib(numTerms);
return 0;
}
