#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long double A,B;
    cin>>A>>B;
    if(B!=0)
    {
        double floorresult = floor(A/B);
        double ceilresult = ceil(A/B);
        double roundresult = round(A/B);
        cout<<"floor "<<A<<" / "<<B<<" = "<<floorresult<<endl;
        cout<<"ceil "<<A<<" / "<<B<<" = "<<ceilresult<<endl;
        cout<<"round "<<A<<" / "<<B<<" = "<<roundresult<<endl;

    }

    return 0;
}
