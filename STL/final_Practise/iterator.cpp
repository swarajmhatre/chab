#include <bits/stdc++.h>
using namespace std;
int main()
{
    //so there is a difference between iterator and value (for based loop) ,
    //for based loop value doesnt point towards a address.
    vector<int> v = {1, 5, 8, 9, 6, 3, 4, 58, 7};
    for (int &value : v)
    {
        cout << value << " ";
    }

    cout << endl;
    vector<int>::iterator it;
    for (it = v.begin(); (it) < v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl; //here we can use iterator without defining it just by auto keyword.
    //above loop can be raplaced by below loop inwhich we have used auto keyword.

    for (auto itr = v.begin(); itr < v.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
}