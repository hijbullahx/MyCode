#include<iostream>
using namespace std;

class Sum {
public:
    int nums;

    void get() {
        cin >> nums;
    }
};

int main() {
    int n, target;
    cin >> target;
    cin >> n;
    Sum s[n];

    for(int i = 0; i < n; i++) {
        s[i].get();
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if (s[i].nums + s[j].nums == target) {
                cout << i << j << endl;
            }
        }
    }

    return 0;
}
