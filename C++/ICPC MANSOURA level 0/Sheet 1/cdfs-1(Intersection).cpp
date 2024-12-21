#include<iostream>
#include<cmath>
using namespace std;
class intersection
{
public:
    int l1, l2, r1, r2;
    int r = -1;
    intersection()
    {
        cin>>l1>>r1>>l2>>r2;
        if(l1>=1 && l1<=pow(10,9) && l2>=1 && l2<=pow(10,9) && r1>=1 && r1<=pow(10,9) && r2>=1 && r2<=pow(10,9))
        {
            if(l1<= r1 && l2<=r2)
            {
                int Start= max(l1, l2);
                int End = min(r1, r2);
                if(Start<= End)
                {
                    cout<<Start<<" "<<End;
                }
                else
                {
                    cout<<r;
                }
            }
             else
                {
                    cout<<r;
                }
        }
        cout<<endl;
    }
};
int main()
{
    intersection i;
    return 0;
}
