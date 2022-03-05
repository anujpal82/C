#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> find3Numbers(int arr[], int n, int X)
{
    vector<vector<int>> vec;
    sort(arr, arr + n);
    bool a = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1;
        int r = n - 1;
        int temp1 = arr[i];
        while (l < r)
        {

            if (arr[i] + arr[l] + arr[r] == X)
            {
                vector<int> p1 = {1, 2, 3};
                vec.push_back(p1);
            }

            else if (arr[i] + arr[l] + arr[r] < X)
                l++;
            else
                r--;
        }
    }
    return vec;
}

int main()
{
    int arr[] = {174, 94, 566, 16, 12, 638};
    vector<vector<int>> p1 = find3Numbers(arr, 6, 122);
    return 0;
}