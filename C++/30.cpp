#include <bits/stdc++.h>
using namespace std;
long long maxProduct(vector<int> arr, int n)
{
    long long ans = arr[0];
    long long ma = ans;
    long long mi = ans;

    long long maxProfit = arr[0];
    long long temp = arr[0];
    for (long long i = 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(ma, mi);
        }
        ma = max((long long)arr[i], ma * (long long)arr[i]);
        mi = min((long long)arr[i], mi * (long long)arr[i]);
        ans = max(ans, ma);
    }

    return ans;
}
int main()
{
    vector<int> arr = {8, -2, -2, 0, 8, 0, -6, -8, -6, -1};
    long long a = maxProduct(arr, 10);
    cout << a;
    return 0;
}