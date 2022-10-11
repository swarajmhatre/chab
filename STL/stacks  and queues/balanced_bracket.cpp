#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    stack<string> s;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
        {
            s.push("(");
        }
        else if (str[i] == ')')
        {
            if (s.empty())
            {
                cout << "brackets are not balanced";
                break;
                return 0;
            }

            s.pop();
        }
    }

    if (!s.empty())
    {
        cout << "brackets are not Balanced";
    }
    else
    {
        cout << "string is balanced congrats";
    }
    return 0;
}