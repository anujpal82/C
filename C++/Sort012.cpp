#include <bits/stdc++.h>
#define PRINTARRAY(array, length)    \
    for (int i = 0; i < length; i++) \
        printf("%d\t", array[i]);
using namespace std;
int main()
{
    int nums[] = {0, 12, 0, 3, 1};

    int size = sizeof(nums) / sizeof(nums[0]);
    int high = size - 1;
    int low = 0;
    int mid = 0;

    int r = 0;
    for (int i = 0; i < size; i++)
        if (nums[i] != 0)
        {
            swap(nums[i], nums[r]);
            r++;
        }

    PRINTARRAY(nums, size);

    return 0;
}