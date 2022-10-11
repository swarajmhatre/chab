#include <bits/stdc++.h>
using namespace std;
int main()
{
        vector <int > v = {1,2,3,4,5,6,7,8,9};
        for(auto value: v)
        {
            cout<<value<<endl;   //auto works same as others just instead of specifying type (data) , we type auto .
        }

        vector<pair<int, int>> r = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
        for (auto value : r)
        {
            cout<<value.first<<" "<<value.second<<endl;
        }


    return 0 ;
}