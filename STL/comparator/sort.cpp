#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> v(5);
    for(int i = 0 ; i<n  ; i++)
    {
        cin>>v[i];
    }

    sort(v.begin() , v.end()-1);

    for(int i = 0 ; i<n  ; i++)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}