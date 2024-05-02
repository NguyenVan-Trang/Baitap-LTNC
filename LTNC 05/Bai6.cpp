#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string name;
        int mark, type;
        cin >> type;
        if (type == 1)
        {
            cin >> name >> mark;
            map<string, int>::iterator itr = m.find(name);
            if (itr == m.end())
                m.insert(make_pair(name, mark));
            else
                itr->second += mark;
        }
        else if (type == 2)
        {
            cin >> name;
            m.erase(name);
        }

        else if (type == 3)
        {
            cin >> name;
            map<string, int>::iterator itr = m.find(name);
            if (itr == m.end())
                cout << '0' << endl;
            else
                cout << itr->second << endl;
        }
    }
    return 0;
}
