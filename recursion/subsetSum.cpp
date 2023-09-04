#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
void subsets(int index, vector<int> &nums, vector<int> &temp, int sum)
{
    // base case
    if (index == nums.size())
    {
        temp.push_back(sum);
        return;
    }
    // recursive call
    // 1. pick the element.
    subsets(index + 1, nums, temp, sum + nums[index]);
    // 2. don't pick the element.
    subsets(index + 1, nums, temp, sum);
}
void subsets(vector<int> &nums)
{
    int index = 0;
    vector<int> temp;
    int sum = 0;
    subsets(index, nums, temp, sum);
    cout << "[";
    for (auto it : temp)
    {

        cout << it << " ";
    }
    cout << "]";
}
int main()
{
    vector<int> nums = {5, 2, 1};
    subsets(nums);
    return 0;
}