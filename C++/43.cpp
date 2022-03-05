#include <bits/stdc++.h>
using namespace std;
int getMedian(int ar1[], int ar2[], int n)
{
    int i = 0, j = 0, m1 = -1, m2 = -1;
    for (int count = 0; count <= n; count++)
    {
        if (ar1[i] <= ar2[j])
        {

            m1 = m2;
            m2 = ar1[i];
            i++;
        }
        else
        {
            m1 = m2;
            m2 = ar2[j];
            j++;
        }
    }
    return (m1 + m2) / 2;
}
int main()
{
    int temp[] = {1, 2, 3, 4, 5};
    int ar2[] = {12, 13, 17, 30, 45};
    int n1 = sizeof(temp) / sizeof(temp[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int a = getMedian(temp, ar2, n1);
    cout << endl
         << a;
    return 0;
}