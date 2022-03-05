#include <bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m)
{
    string output = "Yes";
    unordered_set<int> uset;
    for (int i = 0; i < n; i++)
    {
        uset.insert(a1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (uset.find(a2[i]) == uset.end())
            output = "No";
    }
    return output;
}
int main()
{
    int a2[] = {11, 3, 7, 1, 8};
    int a1[] = {11, 1, 13, 21, 3, 7};
    int size1 = sizeof(a1) / sizeof(a1[0]);
    int size2 = sizeof(a2) / sizeof(a2[0]);
    string s1 = isSubset(a1, a2, size1, size2);
    cout << s1;
    return 0;
}