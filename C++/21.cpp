#include <bits/stdc++.h>
using namespace std;
long long int MERGE(long long arr[], long long temp[], long long int left, long long int mid, long long int right)
{
    int i, j, k;
    int inv_count = 0;
    i = left;
    j = mid;
    k = left;
    while (i <= mid - 1 && j <= right)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = temp[j++];
            inv_count += mid - i;
        }
    }

    return inv_count;
}
long long int MergeSort(long long arr[], long long temp[], long long int p, long long int r)
{
    long long int inv_count = 0;
    if (p < r)
    {
        long long int q = ((p + r) / 2);
        inv_count += MergeSort(arr, temp, p, q);
        inv_count += MergeSort(arr, temp, q + 1, r);
        inv_count += MERGE(arr, temp, p, q + 1, r);
    }
    return inv_count;
}
long long int inversionCount(long long arr[], long long temp[], long long N)
{

    return MergeSort(arr, temp, 0, N - 1);
}
int main()
{
    long long arr[] = {12, 6, 9, 10, 8, 3, 6, 9, 5, 3, 2, 6, 0, 54, 1, 6, 2, 7, 3, 5};
    long long int size = sizeof(arr) / sizeof(arr[0]);
    long long int temp[size];
    long long int a = inversionCount(arr, temp, size);
    cout << a;

    return 0;
}