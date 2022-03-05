#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &arr, int start, int end)
{
    int temp = arr[end];
    for (int i = end; i > start; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[start] = temp;
}
void arrange(vector<int> &arr)
{
    int wrongIndex = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (wrongIndex >= 0)
        {
            if (((arr[i] >= 0) & (arr[wrongIndex] < 0)) || ((arr[i] < 0) && (arr[wrongIndex] >= 0)))
            {
                rotate(arr, wrongIndex, i);
                if (i - wrongIndex >= 2)
                    wrongIndex = wrongIndex + 2;
                else
                    wrongIndex = -1;
            }
        }
        else
        {
            if ((arr[i] < 0) && (i % 2 != 0) || (arr[i] >= 0) && (i % 2 != 1))
            {
                wrongIndex = i;
            }
        }
    }
}
int main()
{
    vector<int> vec = {-5, -2, 5, 2,
                       4, 7, 1, 8, 0, -8};
    arrange(vec);
    for (auto i : vec)
        cout << i << " ";

    return 0;
}