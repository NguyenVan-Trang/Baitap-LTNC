#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        ar.push_back(number);
    }
    int position;
    cin >> position;
    int left, right;
    cin >> left >> right;
    ar.erase(ar.begin() + position - 1);
    ar.erase(ar.begin() + left - 1, ar.begin() + right - 1);
    n = ar.size();
    cout << n << endl;
    for (int i = 0; i < n; i++)
        cout << ar[i] << ' ';
    return 0;
}
