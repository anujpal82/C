#include <bits/stdc++.h>
using namespace std;
bool subArrayExists(int arr[], int n)
{
    bool a = 0;
    unordered_set<int> umap;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0 || umap.find(sum) != umap.end())
            a = 1;
        umap.insert(sum);
    }
    return a;
}
int main()
{ 
    int arr[] = {-3, 2, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool a = subArrayExists(arr, size);
    cout << a;
    return 0;
}   