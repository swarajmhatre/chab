#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size());
    stack<int> stack;
    for (int i = 0; i < v.size(); i++)
    {
        while (!stack.empty() && v[i] > v[stack.top()])
        {
            nge[stack.top()] = i;
            stack.pop();
        }
        stack.push(i);
    }

    while (!stack.empty())
    {
        nge[stack.top()] = -1;
        stack.pop();
    }

    return nge;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> nge = NGE(v);

    for (int i = 0; i < n; i++)
    {
        int ans;
        ans = (nge[i] == -1 ? -1 : v[nge[i]]);
        cout << ans << " ";
    }
}