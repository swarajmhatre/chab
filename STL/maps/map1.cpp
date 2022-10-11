#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int , int > m;
    m [1] = 5;

    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        cin>>m[i];
    }
    
    for(auto &it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}