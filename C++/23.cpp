#include <bits/stdc++.h>
using namespace std;
vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> temp;
    // unordered_map<int, int> umap;
    // for (int i = 0; i < n1; i++)
    // {
    //     umap[A[i]]++;
    // }
    // for (int i = 0; i < n2; i++)
    // {
    //     umap[B[i]]++;
    // }
    // for (int i = 0; i < n3; i++)
    // {
    //     umap[C[i]]++;
    // }
    // for (auto &i : umap)
    // {
    //     if (i.second >= 3)
    //         temp.push_back(i.first);
    // }
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == B[k])
        {
            if (std::find(temp.begin(), temp.end(), A[i]) == temp.end())
                temp.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
            i++;
        else if (B[j] < C[k])
            j++;
        else
            k++;
    };

    return temp;
}
int main()
{
    int A[] = {1, 5, 10, 20, 40, 80, 200, 200, 200};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> temp = commonElements(A, B, C, 9, 5, 8);
    sort(temp.begin(), temp.end());
    for (auto i : temp)
        cout << i << endl;
    return 0;
}