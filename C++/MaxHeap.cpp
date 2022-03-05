#include <iostream>
using namespace std;
void BulidMaxHeap(int arr[], int size, int i);
void BulidMaxHeap(int arr[], int size, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left < size && arr[left] > arr[largest])
        largest = left;
    if (right < size && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        BulidMaxHeap(arr, size, largest);
    }
}
void buildHeap(int arr[], int n)
{

    int startIdx = (n / 2) - 1;

    for (int i = startIdx; i >= 0; i--)
    {

        BulidMaxHeap(arr, n, i);
    }
}
int main()
{
    int arr[] = {0,1,2,1,2,0,0,2,};
    int size = sizeof(arr) / sizeof(arr[0]);
    buildHeap(arr, size);

    int temp[size];
    for (int i = size - 1; i > 0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        BulidMaxHeap(arr, i, 0);
    }

    cout << arr[size - k];

    return 0;
}