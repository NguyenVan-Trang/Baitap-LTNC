#include <bits/stdc++.h>

using namespace std;

int BinarySearch(int ar[], int n, int l, int r, int x){
    if (l > r) return -1;
    int m = (l + r) / 2;
    if (ar[m] > x) return BinarySearch(ar, n, l, m - 1, x);
    else if (ar[m] < x) return BinarySearch(ar, n, m + 1, r, x);
    return m;

}

int main(){
    int n, x;
    cin >> n >> x;
    int ar[n];
    for (int i = 0; i < n; ++i)
        cin >> ar[i];
    cout << BinarySearch(ar, n, 0, n - 1, x);
}
