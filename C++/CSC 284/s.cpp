#include<iostream>
using namespace std;
class T4Tutorials
{
    public:
	int i,j,k,l,n;
	public:
		int pattern()
		{
			cout<<"enter num of rows";
			cin>>n;
		}
		friend int show(T4Tutorials);
	};
	int show (T4Tutorials a)
	{
	for(a.i=1;a.i<=a.n;a.i++)
		{
		for(a.l=1;a.l<=a.n-a.i;a.l++)
		{
			cout<<"*";
			}
			for(a.j=1;a.j<=a.i;a.j++)
			{
			cout<<a.j;
			}
			for(a.k=a.i-1;a.k>=1;a.k--)
			{
				cout<<a.k;
			}
			cout<<endl;
		}
	};
		int main()
		{
			T4Tutorials a;
			a.pattern();
			show(a);
		}
