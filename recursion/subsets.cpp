#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void subsets(vector<int> nums, int index, vector<int> temp, vector<vector<int>> &result)
{
    // base case.
    if (index == nums.size())
    {
        result.push_back(temp);
        return;
    }
    // recursive case.
    // Two conditions either to pick or don't pick the element.
    // 1. Pick the element.
    temp.push_back(nums[index]);
    subsets(nums, index + 1, temp, result);
    temp.pop_back(); // backtracking.
    // 2. Don't pick the element.
    subsets(nums, index + 1, temp, result);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> temp;
    vector<vector<int>> result;
    subsets(nums, 0, temp, result);
    return result;
}
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);
    for (auto &it : ans)
    {
        cout << "[";
        for (auto &it2 : it)
        {
            cout << it2 << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}

// output looks like :
// Users/suthapallisivasriharsha/Developer/Code/LcodeFinal/recursion/"subsets
// [1 2 3 ]
// [1 2 ]
// [1 3 ]
// [1 ]
// [2 3 ]
// [2 ]
// [3 ]
// []