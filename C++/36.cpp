// Given an array of integers and a number x, find the smallest subarray with sum greater than the given value.

// Examples:
// arr[] = {1, 4, 45, 6, 0, 19}
//    x  =  51
// Output: 3
// Minimum length subarray is {4, 45, 6}

// arr[] = {1, 10, 5, 2, 7}
//    x  = 9
// Output: 1
// Minimum length subarray is {10}

// arr[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250}
//     x = 280
// Output: 4
// Minimum length subarray is {100, 1, 0, 200}

// arr[] = {1, 2, 4}
//     x = 8
// Output : Not Possible
// Whole array sum is smaller than 8.

#include <bits/stdc++.h>
using namespace std;
int Solve(int arr[], int n, int X)
{

    int length = 5000;

    for (int i = 0; i < n; i++)
    {
        int length1 = 0;
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            if (arr[j] >= X)
            {
                cout << j << endl;
                return 1;
            }
            if (!(sum > X))
            {
                length1++;
            }
            sum += arr[j];
        }
        if (sum > X)
        {
            length = min(length1, length);
        }
    }
    if (length == 5000)
        return 0;
    else
        return length;
}
int main()
{
    int arr[] = {1, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 8;
    int solve = Solve(arr, size, sum);
    cout << solve;
    return 0;
}