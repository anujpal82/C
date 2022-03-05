#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int getPairCount(int arr[], int size, int k)
{
    unordered_map<int, int> m;
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        int b = k - arr[i];
        if (m[b])
        {
            ans += m[b];
        }
        m[arr[i]]++;
    }
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int ans = getPairCount(arr, size, k);
    cout << ans;
    return 0;
}