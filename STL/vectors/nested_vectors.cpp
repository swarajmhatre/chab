//vector of pairs
#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin>>n;
    vector<pair<int , string > > v;
    for(int i = 0 ; i<n ;i++)
    {
        int x ; string y ;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        cout<<v.size()<<endl;
    }

    for (int i = 0  ; i<v.size() ; i++)
    {
        cout<<v[i].first <<" "<<v[i].second;
    }

    return 0;
}