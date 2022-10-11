#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        m.insert({x, y});
    }

    int key;
    cin >> key;
   

    for(auto &itr : m)
    {
        cout<<(itr).first<<" "<<itr.second<<endl;
    }
    map<int,int> :: iterator it;

    for(int i = 0 ; i<n ; i++)
    {
        auto it = m.lower_bound(key);
    }
    cout<<endl;


    cout<<it->first<<it->second;

    return 0;
}