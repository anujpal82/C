#include <bits/stdc++.h>
using namespace std;

// User function Template
void merge(int arr1[], int arr2[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
        }
    }
    sort(arr2, arr2 + m);
}

// Driver Code Starts
int main()
{

    int A[] = {1, 3, 5, 7};
    int B[] = {0, 2, 6, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    merge(A, B, n, m);
    for (int i : A)
        cout << i << " ";
    for (int i : B)
        cout << endl
             << i << " ";
    return 0;
}