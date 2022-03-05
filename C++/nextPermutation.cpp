#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &nums)
{
    int index = -1;
    for (int i = 0; i < (nums.size() - 1); i++)
    {
        if (nums[i] > nums[i - 1])
        {
            index = i - 1;
            break;
        }
    }
    if (index == -1)
        reverse(nums.begin(), nums.end());
    else
    {
        int index1 = 0;
        for (int i = index + 1; i < (nums.size() - 1); i++)
        {
            if (nums[i] < nums[i + 1])
            {
                index1 = i;
            }
            else
            {
                index1 = i + 1;
            }
        }
        swap(nums[index], nums[index1]);
        reverse(nums.begin() + index + 1, nums.end());
    }
}
int main()
{
    vector<int> arr = {1, 5, 3};
    nextPermutation(arr);
    for (int &i : arr)
        cout << i << " ";
    return 0;
}