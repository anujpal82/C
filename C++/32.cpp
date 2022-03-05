#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &arr, int k)
{
    int size = arr.size();
    int table[k + 1][size + 1];
    for (int i = 0; i <= k; i++)
        table[i][0] = 0;
    for (int i = 0; i <= size; i++)
        table[0][i] = 0;

    for (int i = 1; i <= k; i++)
    {
        int temp = INT_MIN;
        for (int j = 1; j < size; j++)
        {

            for (int k = 0; k < j; k++)
            {
                temp = max(temp,
                           arr[j] - arr[k] + table[i - 1][k]);
            }
            table[i][j] = max(table[i][j - 1], temp);
        }
    }
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= size; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return (table[k][size - 1]);
}
int main()
{
    vector<int> arr = {10, 22, 5, 75, 65, 80};
    int k = 2;
    int a = solve(arr, k);
    cout << a;
    return 0;
}
// C++ program to find out maximum profit by
// buying and selling a share atmost k times
// given stock price of n days
// #include <climits>
// #include <iostream>
// using namespace std;

// // Function to find out maximum profit by buying
// // & selling a share atmost k times given stock
// // price of n days
// int maxProfit(int price[], int n, int k)
// {
//     // table to store results of subproblems
//     // profit[t][i] stores maximum profit using
//     // atmost t transactions up to day i (including
//     // day i)
//     int profit[k + 1][n + 1];

//     // For day 0, you can't earn money
//     // irrespective of how many times you trade
//     for (int i = 0; i <= k; i++)
//         profit[i][0] = 0;

//     // profit is 0 if we don't do any transaction
//     // (i.e. k =0)
//     for (int j = 0; j <= n; j++)
//         profit[0][j] = 0;

//     for (int i = 1; i <= k; i++)
//     {
//         for (int j = 1; j < n; j++)
//         {
//             int max_so_far = INT_MIN;

//             for (int m = j; m >= 0; m--)
//                 max_so_far = max(max_so_far,
//                                  price[j] - price[m] + profit[i - 1][m]);

//             profit[i][j] = max(profit[i][j - 1], max_so_far);
//         }
//     }
//     for (int i = 0; i <= k; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << profit[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return profit[k][n - 1];
// }

// // Driver code
// int main()
// {
//     int k = 2;
//     int price[] = {10, 22, 5, 75, 65, 80};
//     int n = sizeof(price) / sizeof(price[0]);

//     cout << "Maximum profit is: "
//          << maxProfit(price, n, k);

//     return 0;
// }