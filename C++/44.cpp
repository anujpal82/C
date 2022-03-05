#include <bits/stdc++.h>
using namespace std;

int find_median(int a[], int b[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int size = (n1 + n2) / 2;
    int temp[size];
    while (k < (n1 + n2) / 2)
    {
        if (a[i] < b[j])
            temp[k++] = a[i++];
        else
            temp[k++] = b[j++];
    }
    return (temp[size - 1] + temp[size - 2]) / 2;
}

int main()
{
    int temp[] = {3, 17, 1199};
    int ar2[] = {2, 566, 869};
    int n1 = sizeof(temp) / sizeof(temp[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int a = find_median(temp, ar2, 3, 5);
    cout << endl
         << a;
    return 0;
    return 0;
}