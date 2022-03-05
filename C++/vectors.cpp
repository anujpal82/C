#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <unordered_map>
using std::cout;
using namespace std;
using namespace std;
// int mid(int a,int b){
//     if (a+b%2==0)
//     return ((a+b)/2);
//     else
// }
int kthSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < r; i++)
    {
        pq.push(arr[i]);
    }
    int temp;
    for (int i = 0; i < k; i++)
    {
        temp = pq.pop();
    }
    return temp;
}

int main()
{
    int arr[] = {7, 10, 4, 20, 15};
    int temp = kthSmallest(arr, 0, 4, 4);
    cout << temp;
    return 0;
}