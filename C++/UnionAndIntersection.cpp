#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int Intersection(vector<int> A, vector<int> B)
{
    vector<int> Int;
    vector<int> Un;
    unordered_map<int, int> umap;
    for (auto it = A.begin();
         it != A.end(); ++it)
        umap[*it]++;
    for (auto it = B.begin();
         it != B.end(); ++it)
        umap[*it]++;
    for (auto it : umap)
    {

        Int.push_back(it.first);
    }
    // cout << it.first << " " << it.second << endl;

    return umap.count(5);
}
vector<int> Union(int arr[], int size, int k)
{
}

int main()
{
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {4, 5, 6, 7, 8};
    int Int = Intersection(A, B);
    cout << Int;

    return 0;
}