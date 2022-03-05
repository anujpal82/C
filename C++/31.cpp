#include <bits/stdc++.h>
using namespace std;
int findLongestConseqSubseq(int arr[], int N)
{
    int count = 0;
    int prev = arr[0];
    unordered_set<int> set1;
    for (int i = 0; i < N; i++)
    {
        set1.insert(arr[i]);
    }
    int longestStreak = 0;
    for (int i = 0; i < N; i++)
    {
        if (set1.find(arr[i] - 1) == set1.end())
        {
            int currNum = arr[i];
            int currStreak = 1;

            while (set1.find(currNum + 1) != set1.end())
            {
                currNum += 1;
                currStreak++;
            }
            longestStreak = max(longestStreak, currStreak);
        }
    }
    return longestStreak;
}
int main()
{
    int ar[] = {8, 9, 3, 10, 11, 12, 13, 14, 4, 20, 2};
    int a = findLongestConseqSubseq(ar, 11);
    cout << a;
    return 0;
}