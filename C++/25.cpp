#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr = {5, -2, 5, 2, -4, 7, 1, 8, 0, -8};
    int j = arr.size() - 1;
    int i = 0;
    while (j != i)
    {

        if (arr[i] < 0)
            i++;
        else
        {
            swap(arr[i], arr[j]);
            j--;
        }
    }
    if (i == 0 || i == arr.size() - 1)
        return 0;
    int k = 1;
    while (i < arr.size() && k < arr.size())
    {
        swap(arr[i], arr[k]);
        i++;
        k = k + 2;
    }

    for (auto &p : arr)
        cout << p << " ";
    cout << endl
         << i;
    return 0;
}
