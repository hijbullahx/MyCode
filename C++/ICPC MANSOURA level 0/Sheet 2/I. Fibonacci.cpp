#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	int a=0 , b=1 , c, i;

	for (i = 1; i < n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

// Driver code
int main()
{
	int N;
	cin>>N;
	if(N>=1 && N<=50)
    {
        if(N == 1)
        {
            cout<<0;
        }
        else if(N == 2)
        {
            cout<<2;
        }
        else
        {
            cout << fib(N);
        }
    }


	return 0;
}

