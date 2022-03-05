#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    for (int p = 0; p < intervals.size(); p++)
    {
        int temp1;
        int temp2;
        int temp3;
        int temp4;
        for (int q = 0; q < intervals[p].size(); q++)
        {
            temp1 = intervals[p][q];
            temp2 = intervals[p + 1][q];
            temp3 = intervals[p][1];
            temp4 = intervals[p + 1][1];
        }
    }

    return intervals;
}
int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> final = merge(intervals);
    return 0;
}