#include<iostream>
#include<vector>
using namespace std;
class word
{
public:
    string a;
    vector<string> output;
    int n, length;
    void input()
    {
        cin>>n;
        if(n>=1 && n<= 100)
        {
            for(int i= 0; i<n; i++)
            {
                cin>>a;
                output.push_back(a);
            }
            for(string word : output)
            {
                length = word.length();
                if (length>=1 && length<=100)
                {
                    if(length>10)
                    {
                        cout<<word[0]<<length-2<<word[length-1]<<endl;
                    }
                    else
                    {
                        cout<<word<<endl;
                    }

                }
            }
        }
    }

};
int main()
{
    word a;
    a.input();
    return 0;
}
