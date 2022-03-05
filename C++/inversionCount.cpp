#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using std::cout;
using namespace std;
int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    long long int inversionCount = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j = j * 2)
        {
            if (arr[i] > arr[j])
            {
                inversionCount++;

                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
            if (arr[i] > arr[++j])
            {
                
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
                inversionCount++;
            }
        }
    }
    cout << inversionCount;

    return 0;
}