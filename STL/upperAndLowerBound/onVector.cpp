#include <bits/stdc++.h>

#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    
    int key ;
    cin>>key;

    vector<int > v(n);
   for(int i = 0 ; i<n ; i++)
   {
       cin>>v[i];
   }
    sort(v.begin() , v.end() );

    for(int i = 0 ; i<n ; i++)
   {
       cout<<v[i]<<" ";
   }
    cout<<endl;


    auto itr = lower_bound(v.begin() , v.end(), key);
    auto itr2 = upper_bound(v.begin() , v.end() , key);

    cout<<*itr<<" "<<*itr2<<endl;
    return 0 ;
}
