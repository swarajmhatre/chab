#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> s;

    s.push(12);
    s.push(45);
    s.push(75);
    s.push(94);
    s.push(59);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}