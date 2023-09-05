#include <bits/stdc++.h>
using namespace std;
void combinationSum3(int index, int target, int sum, vector<int> &temp, set<vector<int>> &ans, int k)
{
    // base case
    if (sum == target)
    {
        if (k == 0)
        {
            ans.insert(temp);
        }
        return;
    }
    // recursive call
    for (int i = index; i <= 9; i++)
    {
        if (i > 9)
        {
            break;
        }
        temp.push_back(i);                                         // adding the element
        combinationSum3(i + 1, target, sum + i, temp, ans, k - 1); // recursive call
        temp.pop_back();                                           // backtracking and removing the element.
    }
}
void combinationSum3(int n, int k)
{
    vector<int> temp;
    set<vector<int>> ans;
    int index = 1;
    int sum = 0;
    combinationSum3(index, n, sum, temp, ans, k);
    // convert to vector<vector<int>>
    vector<vector<int>> res(ans.begin(), ans.end());
    // print the result
    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n = 7;
    int k = 3;
    combinationSum3(n, k);
    return 0;
}