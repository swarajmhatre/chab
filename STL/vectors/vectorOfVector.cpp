//this program is of vector in vecoter

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> temp;
        //here we have created a vector but the size of vectoe is 0.
        //thats why we cant add any ekement in vector directly .
        //so we create a temp vector and push vack whole vector in outer vector.

        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].size() << endl;
        for (int j = 0; j < v[i].size(); j++)
        {

            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}