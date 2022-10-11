#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> m;
    for (int i = 0; i < 11; i++)
    {
        m[i] = 100;
    }

    m[10] = 200;

    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << '\n';
    }

    m.erase(10);  // delete fun to delete the key value pair , also takes iterator as a parameter

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << '\n';
    }

    map<int, int>::iterator i;
    i = m.find(11);
    if (i == m.end())
        cout << "element is not found ";
    else
        cout << i->first << " " << i->second << " \n";

    return 0;
}