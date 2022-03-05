#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MaxProfit(int arr[], int k, int size)
{

    int table[k][size];
    for (int i = 0; i < size; i++)
    {
        table[0][i] = 0;
        // table[i][0] = 0;
    }
    for (int i = 0; i < k; i++)
    {
        // cout << "Hello";
        table[i][0] = 0;
    }

    for (int i = 1; i <= k; i++)
    {
        int maximum = -500000000;
        for (int j = 1; j < size; j++)
        {
            if (table[i - 1][j - 1] - arr[j - 1] > maximum)
            {
                maximum = table[i - 1][j - 1] - arr[j - 1];
            }
            if (maximum + arr[j] > table[i][j - 1])
            {
                table[i][j] = maximum + arr[j];
            }
            else
            {
                table[i][j] = table[i][j - 1];
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return table[k - 1][size - 1];
}

int main()
{
    int arr[] = {3, 2, 6, 5, 0, 3};
    int k = 3;
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = MaxProfit(arr, k, size);
    cout << ans;
    return 0;
}