#include <bits/stdc++.h>
using namespace std;
bool canMakeArithmeticProgression(vector<int> &arr)
{
    bool a = 0;
    if (arr.size() == 0 || arr.size() == 1)
        a = 1;
    else
    {
        sort(arr.begin(), arr.end());
        int diff = arr[0] - arr[1];
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] - arr[i + 1] == diff)
                a = 1;
        }
    }

    return a;
}
int main()
{
    vector<int> arr = {0, 0, 0, 0};
    bool a = canMakeArithmeticProgression(arr);
    cout << a;
    return 0;
}