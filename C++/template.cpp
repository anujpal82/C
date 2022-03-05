#include <iostream>
using namespace std;
int main()
{
    int inversionCount = 0;
    int arr[] = {2, 4, 1, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {

        if (arr[i] < arr[i + 1])
        {
            inversionCount++;
        }
    }
    cout << inversionCount;

    return 0;
}