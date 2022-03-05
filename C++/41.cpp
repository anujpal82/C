#include <iostream>
using namespace std;

int PalinArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        int temp = arr[i];
        while (temp > 0)
        {
            int r = temp % 10;
            temp /= 10;
            ans = (ans * 10) + r;
        }
        if (arr[i] != ans)
            return 0;
    }
    return 1;
}
int main()
{
    int arr[] = {111, 2242, 333, 444, 555};
    int size = sizeof(arr) / sizeof(arr[0]);
    int a = PalinArray(arr, size);
    cout << a;
    return 0;
}