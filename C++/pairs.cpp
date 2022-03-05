#include <bits/stdc++.h>
using namespace std;
void PrintVector(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); ++i)

    {
        // cout << v[i].first << " " << v[i].second << endl;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // vector<pair<int, int>> p1 = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    vector<vector<int>> p1 = {{1, 2, 3},
                              {3, 4, 5},
                              {5, 6, 7}};
    // int x;
    // cout << "Enter The Value : " << endl;
    // cin >> x;
    // for (int i = 0; i < x; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     p1.push_back({x, y});
    // }
    for (auto &value : p1)
    {
        for (auto &value1 : value)
        {
            value1 = value1 + 1;
            cout << value1 << " ";
        }
        cout << endl;
    }

    PrintVector(p1);

    return 0;
}