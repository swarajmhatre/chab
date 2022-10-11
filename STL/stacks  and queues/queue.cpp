#include <bits/stdc++.h>
using namespace std;
int main()
{

    queue<int> s;

    s.push(12);
    s.push(12);
    s.push(45);
    s.push(75);
    s.push(94);
    s.push(59);

    while(!s.empty())
    {
        cout<<s.front()<<endl;
        s.pop();
    }

    return 0;
}