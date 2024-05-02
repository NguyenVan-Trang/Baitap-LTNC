#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        ar.push_back(input);
    }
    sort(ar.begin(), ar.end());
    for (int i = 0; i < n; i++)
        cout << ar[i] << ' ';
    return 0;
}
