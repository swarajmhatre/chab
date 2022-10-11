#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {34, 34, 34, 654, 4647, 44, 35, 23, 75, 75};

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << "\n";
    for (int value : v)
    {
        cout << value << " ";
    }

    cout << "\n";
    for (int &value : v)
    {
        cout << value << " ";
    }
    cout << "\n";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << (*i) << " ";

    return 0;
}