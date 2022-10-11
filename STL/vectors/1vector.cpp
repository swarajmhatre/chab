#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.size();
    v.push_back(10);
    cout << v.size() << endl;
    v.push_back(20);
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}