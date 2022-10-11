#include <bits/stdc++.h>
using namespace std;

bool cmp(int a , int b)
{
    if(a>b)
    {
        return true;
    }
    return false;

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

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
            if(cmp(arr[i] , arr[j]))
            {
                swap(arr[i] , arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }

    return 0;
}