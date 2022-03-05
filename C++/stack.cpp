#include <bits/stdc++.h>
using namespace std;
void mergeIntervals(vector<pair<int, int>> intervals)
{
    sort(intervals.begin(), intervals.end());
    stack<pair<int, int>> s1;
    s1.push({intervals[0].first, intervals[0].second});
    for (int i = 1; i < intervals.size(); i++)
    {
        int start1, end1, start2, end2;
        start1 = s1.top().first;
        end1 = s1.top().second;
        start2 = intervals[i].first;
        end2 = intervals[i].second;
        if (end1 < start2)
        {
            s1.push({start2, end2});
        }
        else
        {
            s1.pop();
            end1 = max(end1, end2);
            s1.push({start1, end1});
        }
    }
    while (!s1.empty())
    {

        cout << s1.top().first << " " << s1.top().second << endl;
        s1.pop();
    }
}
int main()
{
    vector<pair<int, int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    mergeIntervals(intervals);
    return 0;
}
