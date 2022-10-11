#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n ;
    cin>>n;

    int key ;
    int key ;
    cin>>key;

    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    sort(arr , arr+n );

    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    auto it = lower_bound(arr , arr+n , key);
    auto itr = upper_bound(arr , arr+n , key);

    cout<<*it<<" "<<*itr<<endl;
    return 0 ;
}
