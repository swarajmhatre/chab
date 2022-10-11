#include <bits/stdc++.h>
using namespace std;
void printmap(unordered_map<int, int> &m)
{
    unordered_map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << " \n";
    }
}
int main()
{
    unordered_map<int, int> m;

    m[10] = 20;
    m[20] = 564;
    m[1] = 35;
    m[1] = 355;
    printmap(m);

    return 0;
}