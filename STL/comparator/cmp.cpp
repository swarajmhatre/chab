#include <bits/stdc++.h>
using namespace std;

bool cmp(int a , int b)
{
    // if(a>b)
    // {
    //     return true;
    // }
    // return false;

    return a>b;

}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort( arr, arr+n , cmp);
    

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }

    return 0;
}