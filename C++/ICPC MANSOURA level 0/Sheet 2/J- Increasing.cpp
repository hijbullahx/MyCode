#include<iostream>
#include<cmath>
using namespace std;
class increase
{
public:
    int t,j,n;
    bool in;
    //int size = max(1,int(pow(10,9)));
    //int *a = new int[size];
    void get()
    {
        cin>>t;
        //if(t>=1 && t<= 100)
        {
            for (int i =0; i<t; i++)
            {
                cin>>n;
                int a[n];
                //if(n>=1 && n<= 100)
                {
                    for(j=0; j<n; j++)
                    {
                        cin>>a[j];
                    }
                    for(j=0; j<n; j++)
                    {
                        if(a[j]>a[j+1])
                        {
                            in = true;
                            break;
                        }
                        else if(a[j]<a[j+1])
                        {
                            in = true;
                            break;
                        }
                        else
                        {
                            in = false;
                            break;
                        }
                    }
                }
                for(int i=0; i<n; i++)
                {
                    if(in)
                    {
                        cout<<"YES"<<" ";
                        break;
                    }
                    else
                    {
                        cout<<"NO"<<" ";
                        break;
                    }
                }
            }

        }

    }
};
int main()
{
    increase i;
    i.get();
    return 0;
}
