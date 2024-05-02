#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int n;
    cin >> n;
    set<int>ar;
    for (int i = 1; i <= n; i++)
    {
        int type, x;
        cin >> type >> x;
        if (type == 1)
        {
            ar.insert(x);
        }
        else if(type == 2)
        {
            ar.erase(x);
        }
        else if (type == 3)
        {
            set<int>::iterator itr = ar.find(x);
            if (itr==ar.end())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
    return 0;
}



