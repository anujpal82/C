#include <bits/stdc++.h>
using namespace std;

vector<int> Factorial(int n)
{
    vector<int> temp;
    if (n == 0 || n == 1)
    {
        temp.push_back(1);
        return temp;
    }
    else
    {
        temp.push_back(1);
        for (int x = 2; x <= n; x++)
        {
            int car = 0;
            for (int i = 0; i < temp.size(); i++)
            {
                int val = temp[i] * x + car;
                temp[i] = val % 10;
                car = val / 10;
            }
            while (car != 0)
            {
                temp.push_back(car % 10);
                car /= 10;
            }
        }
    }
    reverse(temp.begin(), temp.end());
    return temp;
}
int main()
{
    int n = 0;
    vector<int> temp = Factorial(n);
    for (auto &i : temp)
        cout << i;
    return 0;
}
