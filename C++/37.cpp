#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int N)
{
    int left[N];
    left[0] = arr[0];
    for (int i = 1; i < N; i++)
    {
        left[i] = max(arr[i], left[i - 1]);
    }
    int right[N];
    right[N - 1] = arr[N - 1];
    for (int i = N - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }

    int ans = 0;
    for (int i = 1; i < N - 1; i++)
    {
        ans += min(left[i], right[i]) - arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {3, 0, 0, 2, 0, 4};
    int N = 6;
    int a = solve(arr, N);
    cout << a;
    return 0;
}