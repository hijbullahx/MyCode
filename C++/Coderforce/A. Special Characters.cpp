#include<bits/stdc++.h>
#include<string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n%2==1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        int i = 0;
        while(n) {
            if(i%2==0) {
                cout << "AA";
                i=1;
            } else {
                cout << "BB";
                i=0;
            }
            n=n-2;
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
