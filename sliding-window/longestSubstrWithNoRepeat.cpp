#include <bits/stdc++.h>
using namespace std;
int longestsubstrwithnorepeating(string s)
{
    int n = s.length();
    // define the pointers
    int start = 0;
    int end = 0;
    int maxLen = INT_MIN;
    // define the integer array to store the char counts.
    int charCount[256] = {0};
    while (end < n)
    {
        charCount[s[end]]++;
        while (charCount[s[end]] > 1)
        {
            charCount[s[start]]--;
            start++;
        }
        maxLen = max(maxLen, end - start + 1);
        end++;
    }
    return maxLen;
}
int main()
{
    string s = "eceba";
    int ans = longestsubstrwithnorepeating(s);
    cout << ans << endl;
    return 0;
}