class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle empty vector case

        sort(nums.begin(), nums.end()); // sort the array
        int maxLen = 0; // Initialize maximum length to 0
        int currentLen = 1; // Initialize current length to 1

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1]) { // If current number is not a duplicate
                if (nums[i] == nums[i-1] + 1) {
                    // If the current number is consecutive
                    currentLen++; // Increase the current length
                } else {
                    // If not consecutive, update max length and reset current length
                    maxLen = max(maxLen, currentLen);
                    currentLen = 1; // Reset current length
                }
            }
            // For duplicates, do nothing
        }

        // After the loop, we need to check one last time in case the longest sequence is at the end
        maxLen = max(maxLen, currentLen);

        return maxLen; // Return the maximum length
    }
};