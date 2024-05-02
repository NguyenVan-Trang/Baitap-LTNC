#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> ar;
    for (int i = 0; i < n; i++) {
        int b; cin >> b;
        ar.push_back(b);
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int c; cin >> c;
        int val = lower_bound(a.begin(), a.end(), c) - a.begin();
        if (c == a[val]) cout << "Yes " << val + 1 << "\n";
        else cout << "No " << val + 1 << "\n";
    }
    return 0;
}
