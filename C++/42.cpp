#include <bits/stdc++.h>
using namespace std;
int getMedian(int ar1[], int ar2[], int n, int m)
{

    int temp[2 * n];
    int k = 0;
    // while (i != n - 1)
    //     temp[i++];
    // while (j != n - 1)
    //     temp[j++];
    for (int i = 0; i < n; i++)
        temp[k++] = ar1[i];
    for (int j = 0; j < m; j++)
        temp[k++] = ar2[j];
    sort(temp, temp + m + n);
    for (auto item : temp)
        cout << item << " ";
    if ((((n + m) % 2) != 0))
        return temp[(n + m) / 2];
    else
        return ((temp[(n + m - 1) / 2] + temp[(n + m) / 2]) / 2);
}
int main()
{
    int temp[] = {1, 12, 15, 26, 38};
    int ar2[] = {2, 13, 17, 30, 45};
    int n1 = sizeof(temp) / sizeof(temp[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int a = getMedian(temp, ar2, n1, n2);
    cout << endl
         << a;
    return 0;
}