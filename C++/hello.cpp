// #include <iostream>
// using namespace std;
// int main()
// {
//     int MaxSum = 0;
//     int tempSum = 0;
//     int arr[] = {1, 3, 5, 7, -4, -4, 6, 3, 6};
//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//     {

//         tempSum = tempSum + arr[i];
//         // cout << tempSum << endl;
//         if (tempSum > MaxSum)
//         {
//             MaxSum = tempSum;
//             cout << MaxSum << " " << tempSum << endl;
//         }

//         if (arr[i] < 0)
//         {
//             tempSum = 0;
//         }
//     }
//     cout << MaxSum;
//     return 0;
// }
// C++ program to print largest contiguous array sum
#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = {1, 3, 5, 7, -4, -4, 6, 3, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}