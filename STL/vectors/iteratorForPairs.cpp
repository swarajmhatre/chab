#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    vector<pair<int, int>>::iterator it;

    for (it = v.begin(); it < v.end(); it++)
    {
        //here bracket for *it* is very imp..Do not forgot it
        cout << (*it).first << " " << (*it).second << endl;
        //instead of this we can use arrow also
        cout << (it->first) << " " << (it->second) << endl;
    }

    return 0;
}