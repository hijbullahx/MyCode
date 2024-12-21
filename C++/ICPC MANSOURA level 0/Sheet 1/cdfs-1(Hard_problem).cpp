#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
class hard
{
    int A, B, C;
    public:
        vector <int> e;
        hard()
        {
            cin>>A>>B>>C;
            if( A>= pow(-10,9) &&  A<= pow(10,9) &&  B>= pow(-10,9) &&  B<= pow(10,9) &&  C>= pow(-10,9) &&  C<= pow(10,9))
            {
               int arr[3] = {A,B, C};
               for(int i =0; i<3; i++)
               {
                  for(int p= i+1; p<3; p++)
                  {
                      if(arr[i]>arr[p])
                         {
                            int h;
                            h= arr[i];
                            arr[i] = arr[p];
                            arr[p] = h;
                         }
                  }
                  e.push_back(arr[i]);
               }
            }
        }
};
int main()
{
    hard h;
    for(int i=0; i<h.e.size(); i++)
    {
        cout<<h.e[i]<<" ";
    }
}
