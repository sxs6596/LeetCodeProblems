#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
void letterCombinations(int num, string output, vector<string> &result, string options[])
{
    // base case
    if (num == 0)
    {
        result.push_back(output);
        return;
    }
    // recursive call
    int digit = num % 10;
    string option_value = options[digit];
    for (int i = 0; i < option_value.length(); i++)
    {
        letterCombinations(num / 10, option_value[i] + output, result, options);
    }
}
void letterCombinations(string num)
{
    int number = stoi(num); // converting the string to integer.
    vector<string> result;
    string options[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    letterCombinations(number, "", result, options);
    cout << "[";
    for (auto it : result)
    {
        cout << it << " ";
    }
    cout << "]";
}
int main()
{
    string num = "23";
    letterCombinations(num);
    return 0;
}