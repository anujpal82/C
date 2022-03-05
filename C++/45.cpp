#include <bits/stdc++.h>
using namespace std;
double Solve(vector<int> input1, vector<int> input2)
{

    if (input1.size() > input2.size())
    {
        return Solve(input2, input1);
    }
    int X = input1.size();
    int Y = input2.size();
    int low = 0;
    int high = X;
    while (low <= high)
    {
        int PX = (low + high) / 2;
        int PY = ((X + Y + 1) / 2) - PX;
        int maxLeftX = (PX == 0) ? INT_MIN : input1[PX - 1];
        int minRightX = (PX == X) ? INT_MAX : input1[PX];
        int minRightY = (PX == Y) ? INT_MAX : input2[PY];
        int maxLeftY = (PY == 0) ? INT_MIN : input2[PY - 1];
        if (maxLeftX <= minRightY && maxLeftY <= minRightX)
        {
            if ((X + Y % 2) != 0)
            {
                return (double)max(maxLeftY, maxLeftX);
            }
            else
                return (double)(max(maxLeftX, maxLeftY) + max(minRightY, minRightX)) / 2;
        }
        else if (maxLeftX > minRightY)
        {
            high = PX - 1;
        }
        else
            low = PX + 1;
    }
}
int main()
{
    vector<int> X = {1, 2, 3, 4, 5, 6};
    vector<int> Y = {6, 7, 8, 9};
    double a = Solve(X, Y);
    cout << a;
    return 0;
}